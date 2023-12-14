//KODE 1
#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main(){
	char a1[20];
	char a2[20];
	//clrscr();
	cout<<"Masukkan Kata - 1 =";
	cin>>a1;
	cout<<"Masukkan Kata - 2 =";
	cin>>a2;

	strcat(a1, a2);
	cout<<"Hasil Penggabungan "<<a1;
	getchar();
}

//CODE 2
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char a1[] = "IBIK";
	char a2[] = "IbiK";
	char b1[] = "ibik";
	//clrscr();
	cout<<"Hasil Perbandingan "<<a1<<" dan "<<a2<<"->";
	cout<<strcmp(a1, a2)<<endl;
	cout<<"Hasil Perbandingan "<<a2<<" dan "<<a1<<"->";
	cout<<strcmp(a2, a1)<<endl;
	cout<<"Hasil Perbandingan "<<a1<<" dan "<<b1<<"->";
	cout<<strcmp(a1, b1)<<endl;
	getchar();
}

//CODE 3
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 char huruf[20];
 char pindah[20];
//clrscr();
 cout<<"Masukkan Sembarang Kata = ";
 cin >> huruf;
 cout<<"Panjang Kata Yang Diinputkan = ";
 cout<<strlen(huruf);
 getchar();
}

//CODE 4
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char kalimat[100];
	cout<<"Masukkan Kalimatt: ";
	cin.getline(kalimat, sizeof(kalimat));
	
	int x = strlen(kalimat);
	cout<<"Kalimat Terbalik: ";
	for(int i=x-1; i>=0; i++){
		cout<<kalimat[i];
	}
	cout<<endl;
	return 0;
}

//CODE 5
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main(){
	char teks[20], teks_baru[20];
	cout<<"Tuliskan Kata Dengan Huruf Kapital = ";
	cin>>teks;
	for(int i=0; i<strlen(teks); i++){
		if(teks[i] >= 'a' && teks[i] <= 'z'){
			teks_baru[i] = toupper(teks[i]);
		}else{
			teks_baru[i] = tolower(teks[i]);
		}
	}
	cout<<"Hasil Perubahan = "<<teks_baru<<endl;
	return 0;
}

//CODE 6
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream myfile;
	myfile.open("TEST.txt", ios::app);
	cout<<"OPERASI FILE OFSTREAM"<<endl;
	cout<<"------------------"<<endl;
	if(!myfile.fail()){
		myfile<<"Belajar OPERASI FILE OFSTREAM"<<endl;
	}else{
		cout<<"File tidak ditemukan"<<endl;
	}
	getchar();
	return 0;
}

//CODE 7
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream myfile;
	char sv_text;
	myfile.open("TEST.txt");
	cout<<"OPERASI FILE 2"<<endl;
	cout<<"--------------"<<endl;
	if(!myfile.fail()){
		cout<<"Isi dari File TEST.txt adalah ";
		while (!myfile.eof()){
			myfile.get(sv_text);
			cout<<sv_text;
		}myfile.close();
 	}else{
 		cout<<"File tidak ditemukan"<<endl;
 	}
	 getchar();
	 return 0;
}

//CODE 8
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	char kata[20];
	float angka, a;
	cout<<"Masukkan sembarang angka = ";
	cin>>kata;
	angka=atof(kata);
	a=angka+5;
	cout<<"Hasil perubahan ditambah dengan 5 = "<<a;
	getchar();
}

//CODE 9
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	char kata[20];
	float angka, a, b;
	cout<<"Masukkan sembarang kata berupa angka = ";
	cin>>kata;
	angka=atoi(kata);
	a=angka+7;
	cout<<"Hasil perubahan ditambah dengan 7 = "<<a;
	getchar();
}

//CODE 10
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	char kata[20];
	float angka, a;
	cout<<"Masukkan sembarang kata berupa angka = ";
	cin>>kata;
	angka=atol(kata);
	a=angka+8;
	cout<<"Hasil perubahan ditambah dengan 8 = "<<a;
	getchar();
}
