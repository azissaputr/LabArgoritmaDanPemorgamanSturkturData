#include <iostream>
using namespace std;

struct mhs {
    char nama[20], nim[10], matkul[15];
    int sks;
	};

mhs bayar[2];

int main() {
    int var, tetap;

    for (int i = 1; i < 3; i++) {

        cout << "Nama mahasiswa ke-" << i << " = ";
        cin >> bayar[i].nama;
        cout << "NIM	       = ";
        cin >> bayar[i].nim;
        cout << "Mata Kuliah    = ";
        cin >> bayar[i].matkul;
        cout << "Jumlah sks     = ";
        cin >> bayar[i].sks;
        cout << "=====================";

        tetap = 1000000;
        var = bayar[i].sks * 50000;

        cout << "========================================";
        cout << "\nNama mahasiswa = " << bayar[i].nama;
        cout << "\nNIM  	       = " << bayar[i].nim;
        cout << "\nMata Kuliah    = " << bayar[i].matkul;
        cout << "\nJumlah sks     = " << bayar[i].sks;
        cout << "\n======================================";
        cout << "\nSPP tetap      = " << tetap;
        cout << "\nSPP variabel   = " << var;
        cout <<endl <<endl;
    }

    return 0;
}
