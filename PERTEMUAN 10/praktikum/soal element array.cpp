#include <iostream>
using namespace std;

int tambahArayy(const int *arr, int ukuran){
	int hasil = 0;
	for (int i=0; i< ukuran; i++){
		hasil += *arr;
		arr++;
	}
	return hasil;
}

int main (){
	int ukuranArray;
	cout << "masukan ukuran arayy: ";
	cin >> ukuranArray;
	
	int arrayAngka[ukuranArray];
	cout<< " masukan elemt arayy: "<< endl;
	for (int i = 0; i < ukuranArray; i++){
		cout<<" element ke "<< 1 + 0;
		cin >> arrayAngka[i];
	}
	int total = tambahArayy(arrayAngka, ukuranArray);
	cout<<" hasil penjumlahan array: " << total << endl;
	
	return 0;
	
	
}
