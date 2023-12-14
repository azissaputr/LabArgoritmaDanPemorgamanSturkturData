#include <iostream>

using namespace std;

//int main() {
//	struct {
//		char nim[9];
//		char nama[15];
//		float nilai;
//	}
//	
//	mahasiswa;
//	cout << "Masukkan NIM: "; cin >> mahasiswa.nim;
//	cout << "Masukkan Nama: "; cin >> mahasiswa.nama;
//	cout << "Masukkan Nilai Akhir: "; cin >> mahasiswa.nilai;
//	
//	cout << "\n\nData Yang di Inputkan Adalah: \n\n";
//	cout << "NIM: " << mahasiswa.nim << endl;
//	cout << "Nama: " << mahasiswa.nama << endl;
//	cout << "Nilai Akhir: " << mahasiswa.nilai << endl;
//	
//	return 0;
//}

//--------------------------------------------------------------

//struct siswa {
//		int no_induk;
//		string nama;
//		float nilai;
//	};
//	
//int main() {
//	siswa Arkan, Lucas;
//	
//	Arkan.no_induk = 1;
//	Arkan.nama = "Arkan Januar";
//	Arkan.nilai = 75.5;
//	
//	Lucas.no_induk = 2;
//	Lucas.nama = "Lucas Laksono";
//	Lucas.nilai = 89.9;
//	
//	cout << Arkan.nama << " dengan nomor induk " << Arkan.no_induk << " Mendapatkan nilai " << Arkan.nilai << endl;
//	cout << Lucas.nama << " dengan nomor induk " << Lucas.no_induk << " Mendapatkan nilai " << Lucas.nilai << endl;
//	
//	return 0;
//}

//--------------------------------------------------------------

//struct siswa {
//		int no_induk;
//		string nama;
//		float nilai;
//	};
//	
//int main() {
//	siswa Jery = {1, "Jery Januar", 85.5};
//	siswa Tono = {2, "Tono Laksono", 89.9};
//	
//	cout << Jery.nama << " mendaptkan nilai " << Jery.nilai << endl;
//	cout << Tono.nama << " mendaptkan nilai " << Tono.nilai << endl;
//	
//	return 0;
//}

//--------------------------------------------------------------

//int main() {
//	struct dtmhs {
//		char nim[9];
//		char nama[15];
//	};
//	
//	struct dtnil {
//		float nil1;
//		float nil2;
//	};
//	
//	struct {
//		struct dtmhs mhs;
//		struct dtnil nil;
//	} nilai;
//	
//	cout << "Masukkan NIM = "; cin >> nilai.mhs.nim;
//	cout << "Masukkan Nama = "; cin >> nilai.mhs.nama;
//	cout << "Masukkan Nilai UTS = "; cin >> nilai.nil.nil1;
//	cout << "Masukkan Nilai UAS = "; cin >> nilai.nil.nil2;
//	cout << endl;
//	
//	cout << "Masukkan NIM = "; cin >> nilai.mhs.nim; cout << endl;
//	cout << "Masukkan Nama = "; cin >> nilai.mhs.nama; cout << endl;
//	cout << "Masukkan Nilai UTS = "; cin >> nilai.nil.nil1; cout << endl;
//	cout << "Masukkan Nilai UAS = "; cin >> nilai.nil.nil2; cout << endl;
//	cout << endl;
//	
//	return 0;
//}

//--------------------------------------------------------------

//typedef struct orang {
//	char nama[30];
//	short umur;
//} org;
//	
//int main() {
//	org saya[5];
//	int i, x;
//	for(i = 0; i <= 2; i++) {
//		cout << "Nama : "; cin >> saya[i].nama;
//		cout << "Umur : "; cin >> saya[i].umur;
//		cout << endl;
//	}
//	
//	for(x = 0; x <= 2; x++) {
//		cout << "Data ke [" << x << "] " << "bernama " << saya[x].nama << " dan berumur " << saya[x].umur << " tahun";
//		cout << endl;
//	}
//	
//	return 0;
//}

//--------------------------------------------------------------

//struct Sum {
//	int add(int num1, int num2) {
//		return num1 + num2;
//	}
//	int add(int num1, int num2, int num3) {
//		return num1 + num2 + num3;
//	}
//};
//
//
//int main() {
//	Sum calculator;
//	
//	cout << "Hasil 1 = " << calculator.add(5, 7) << endl;
//	cout << "Hasil 2 = " << calculator.add(9, 2, 5) << endl;
//	
//	return 0;
//}
