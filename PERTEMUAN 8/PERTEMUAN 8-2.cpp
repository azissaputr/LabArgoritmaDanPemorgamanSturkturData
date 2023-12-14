#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    int banyakjenis, jumlahBayar = 0;

    cout << "GEROBAK FRIED CHICKEN" << endl;
    cout << "=======================" << endl;
    cout << "Kode\tjenis\tHarga" << endl;
    cout << "===========================================" << endl;
    cout << "D\tDada\tRp. 2500 " << endl;
    cout << "P\tPaha\tRp.2000" << endl;
    cout << "S\tSayap\tRp.1500" << endl << endl;

    cout << "Banyak Jenis : ";
    cin >> banyakjenis;
    cout << endl;

    string keranjang[banyakjenis][4];
    for (int i = 0; i < banyakjenis; i++) {
        cout << "jenis ke - " << i + 1 << endl;
        for (int j = 0; j < 1; j++) {
            cout << "jenis potong [D/P/S] : ";
            cin >> keranjang[i][0];

            cout << "Banyak potong: ";
            cin >> keranjang[i][1];

            if (keranjang[i][0] == "D") {
                keranjang[i][2] = "2500";
            } else if (keranjang[i][0] == "P") {
                keranjang[i][2] = "2000";
            } else if (keranjang[i][0] == "S") {
                keranjang[i][2] = "1500";
            } else {
                cout << "Kode jenis tidak valid." << endl;
                return 1;  // Keluar dari program jika kode jenis tidak valid
            }

            // Menggunakan istringstream untuk mengonversi string ke integer
            istringstream ss(keranjang[i][2]);
            int harga;
            ss >> harga;

            // Menggunakan istringstream untuk mengonversi string ke integer
            istringstream ssJumlah(keranjang[i][1]);
            int jumlah;
            ssJumlah >> jumlah;

            // Menghitung jumlahBayar
            int totalHarga = harga * jumlah;
            jumlahBayar += totalHarga;

            // Menggunakan istringstream untuk mengonversi integer ke string
            ostringstream ssTotalHarga;
            ssTotalHarga << totalHarga;

            keranjang[i][3] = ssTotalHarga.str();
        }
        cout << endl;
    }

    cout << "\t\t\tGEROBAK FRIED CHICKEN" << endl;
    cout << "=========================================================================" << endl;
    cout << "NO.\tJenis\t\tHarga\t\tBanyak\t\tJumlah" << endl;
    cout << "\tPotong\t\tSatuan\t\tBeli\t\tHarga" << endl;
    cout << "=========================================================================" << endl;

    for (int i = 0; i < banyakjenis; i++) {
        cout << i + 1 << "\t" << "\t\t" << keranjang[i][0] << "\t\t" << keranjang[i][2] << "\t\t" << keranjang[i][1] << "\t\tRp. " << keranjang[i][3] << endl;
    }

    cout << "=========================================================================" << endl;
    cout << "\t\t\t\t\tJumlah bayar\tRp. " << jumlahBayar << endl;
    cout << "\t\t\t\t\tPajak 10%\tRp. " << 10 * jumlahBayar / 100 << endl;
    cout << "\t\t\t\t\tTotal Bayar\tRp. " << jumlahBayar + (10 * jumlahBayar / 100) << endl;

    return 0;
}
