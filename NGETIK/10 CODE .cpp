#include <iostream>

using namespace std;

//--------------------------------------------------

//int main() {
//	int ilham, amir, *raka;
//	
//	ilham = 75;
//	amir = ilham;
//	raka = &ilham;
//	
//	cout << "Nilai ILHAM = " << ilham << endl;
//	cout << "Nilai AMIR = " << amir << endl;
//	cout << "Nilai RAKA = " << raka << endl;
//	
//	getchar();
//	
//	return 0;
//	
//}

//--------------------------------------------------

//int main() {
//	int ilham, *raka, rafli;
//	
//	ilham = 75;
//	raka = &ilham;
//	rafli = *raka;
//	
//	cout << "Nilai ILHAM = " << ilham << endl;
//	cout << "Nilai RAKA = " << raka << endl;
//	cout << "Nilai RAFLI = " << rafli << endl;
//	
//	getchar();
//	
//	return 0;
//	
//}

//--------------------------------------------------

//int main() {
//	int yofrie = 93;
//	int *hadiansyah;
//	
//	cout << "Nilai awal yofrie = " << yofrie << endl;
//	hadiansyah = &yofrie;
//	cout << "Nilai hadiansyah sekarang = " << *hadiansyah << endl;
//	*hadiansyah = 50;
//	cout << "Hadiansyah sekarang = " << *hadiansyah << endl;
//	
//	getchar();
//	
//	return 0;
//	
//}

//--------------------------------------------------

//int main() {
//	int ilham;
//	int *raka;
//	int **amir;
//	
//	ilham = 75;
//	cout << "Nilai ILHAM = " << ilham << endl;
//	raka = &ilham;
//	amir = &raka;
//	
//	cout << "Nilai RAKA Hasil Mengakses ILHAM = " << *raka << endl;
//	cout << "Nilai AMIR Hasil Mengakses ILHAM = " << **amir << endl;
//	
//	
//	getchar();
//	
//	return 0;
//	
//}

//--------------------------------------------------

//int main() {
//	int i;
//	int nilai[5];
//	int *ptrnilai;
//	ptrnilai = nilai;
//	
//	for(i = 1; i <= 5; i++) {
//		cout << "Masukkan Nilai Elemen ke-" << i << "=";
//		cin >> nilai[i];
//	}
//	
//	cout << endl;
//	cout <<"Hasil Pengaksesan Elemen Array Lewat Pointer";
//	cout << endl << endl;
//	
//	for(i = 1; i <=5; i++) {
//		cout << "Element " << i << ". Nilai" << nilai[i];
//		cout << ", menempati alamat memori = ";
//		cout << &ptrnilai[i];
//		cout << endl;
//	}
//	
//	
//	getchar();
//	
//	return 0;
//	
//}

//--------------------------------------------------

//int main() {
//	char band_metal[] = "SEPULTURA";
//	char *band_punk = "RANCID";
//	cout << "Nama band metal = " << band_metal << endl;
//	cout << "nama band punk = " << band_punk << endl;
//	band_punk += 3;
//	cout << "Nama band metal = " << band_metal << endl;
//	cout << "Nama band punk = " << band_punk;	
//	
//	getchar();
//	
//	return 0;
//	
//}

//--------------------------------------------------


//int tambahkanArray(int *arr, int ukuran) {
//	int hasil = 0;
//	for(int i = 0; i < ukuran; i++) {
//		hasil += *arr;
//		arr++;
//	}
//	return hasil;
//}
//
//int main() {
//	int ukuranArray;
//	
//	cout << "Masukkan ukuran array: "; cin >> ukuranArray;
//	
//	int arrayAngka[ukuranArray];
//	
//	std::cout << "Masukkan elemen array: " << std::endl;
//	
//	for(int i = 0; i < ukuranArray; ++i) {
//		cout << "Elemen ke-" << i + 1 << ": "; std::cin >> arrayAngka[i];
//	}
//	
//	int total = tambahkanArray(arrayAngka, ukuranArray);
//	std::cout << "Hasil penjumlahan array: " << total << std::endl;
//	
//	return 0;	
//}
