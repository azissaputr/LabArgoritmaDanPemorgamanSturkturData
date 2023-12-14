#include <iostream>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main () {
	char a1[20];
	char a2[20];
	
	cout << "Masukkan Kata - 1 : ";
	cin >> a1;
	cout << "Masukkan Kata - 2 : ";
	cin >> a2;
	
	strcat(a1, a2);
	
	cout << "Hasil penggabungannya = " << a1 << endl;
	getchar();
	
	char a3[] = "IBIK";
	char a4[] = "Ibik";
	char b1[] = "IBIK";
	//clrscr();
	
	cout<<"\nHasil Perbandingan "<<a3<<" dan "<<a2<<"->";
	cout<<strcmp(a3,a4)<<endl;
	cout<<"Hasil Perbandingan "<<a4<<" dan "<<a4<<"->";
	cout<<strcmp(a4,a3) <<endl;
	cout<<"Hasil Perbandingan "<<a3<<" dan "<<b1<<"->";
	cout<<strcmp(a3,b1) <<endl;
 	getchar();
 	
 	char huruf[20];
	char pindah[20];
	//clrscr();
	cout<<"Masukkan Sembarang Kata = ";
	cin >> huruf;
	/* Proses */
	strcpy(pindah, huruf);
	cout<<"Pemindahannya = "<<pindah << endl;
	getchar();
	
	char huruf1[20];
	char pindah1[20];
	
	cout << "Masukkan sembarang kata = ";
	cin >> huruf;
	cout << "Panjang kata yang di inputkan adalah " << strlen(huruf) << " karakter" << endl;
	getchar();

	char kalimat[100];
    cout << "Masukkan Kalimat: ";
    cin.getline(kalimat, sizeof(kalimat));

    int x = strlen(kalimat);
    cout << "Kalimat Terbalik: ";
    for (int i = x - 1; i >= 0; i--) {
        cout << kalimat[i];
    }

    cout << endl;
    
	char kata[20];
	
	float angka, a;
	
	cout << "Masukkan sembarang angka = ";
	cin >> kata;
	angka = atof(kata);   
	a = angka + 5;
	cout << "Hasil perubahan ditambah dengan 5 = " << a << endl;
	getchar();


	char kata1[20];
	
	float angka1, b;
	
	cout << "Masukkan sembarang angka = ";
	cin >> kata1;
	angka1 = atoi(kata1);
	b = angka1 + 7;
	cout << "Hasil perubahan ditambah dengan 7 = " << b << endl;
	getchar();

	char kata2[20];
	
	float angka2, c;
	
	cout << "Masukkan sembarang angka = ";
	cin >> kata2;
	angka2 = atol(kata2);
	c = angka2 + 8;
	cout << "Hasil perubahan ditambah dengan 7 = " << c << endl;
	getchar();
	
	char teks[20], teks_baru[20];
	cout << "Tuliskan kata dengan huruf kapital = ";
	cin >> teks;
	for (int i=0; i<strlen(teks); i++) {
	if(teks[i] >= 'a' && teks[i] <= 'z'){
	teks_baru[i] = toupper(teks[i]);
	}
	else{
	teks_baru[i] = tolower(teks[i]);
	}
	}
	cout << "Hasil Perubahan = " << teks_baru << endl;

	
}
