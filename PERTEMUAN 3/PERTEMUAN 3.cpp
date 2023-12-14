#include <iostream>
#include <string.h>
using namespace std;

float hitungRataRata( float nilaipertandingan1,float nilaipertandingan2,float nilaipertandingan3){
	float result;
	
	result = nilaipertandingan1 + nilaipertandingan2 + nilaipertandingan3;
	result = result / 3 ;
	
	return result;
}
int main () {
	string namaSiswa,hadiah;
	int nilaipertandingan1,nilaipertandingan2,nilaipertandingan3;
	float nilairatarata;
	//pengkondisian if else
	
	cout << "program hitung nilai rata-rata"<<endl;
	cout <<"nama siswa : "; getline (cin,namaSiswa);
	cout <<"nilai pertandingan I : "; cin>> nilaipertandingan1;
	cout <<"nilai pertandingan II :"; cin>> nilaipertandingan2;
	cout <<"nilai pertandingan  III :"; cin>> nilaipertandingan3;
	
	nilairatarata = hitungRataRata(nilaipertandingan1, nilaipertandingan2, nilaipertandingan3);
	if(nilairatarata>= 85 ) {
		hadiah = " komputer core i5 ";
	}
	else {
		if(nilairatarata >= 70 ) {
		hadiah = " uang sebesar Rp.2.500.000 ";
	} 
	else if(nilairatarata < 70 ) {
		hadiah = " liburan ke oyo ";
	}
   }
cout << "siswa yang bernama "<< namaSiswa <<endl;
cout << "memperolah nilai rata - rata "<< nilairatarata << " dari hasil perlombaan yang diikutinya "<<endl;
cout << "hadiah yang didapat adalah"<<hadiah <<endl;
cout << "pengkodisian if else"<< endl;
cout << "===========================================================" <<endl;

//Pengkondisian nested if

cout << "Program Hitung Nilai Rata-Rata" << endl; 
cout << "Nama Siswa :"; cin.ignore(); getline(cin, namaSiswa);
cout << "Nilai Pertandingan I : "; cin>> nilaipertandingan1;
cout << "Nilai Pertandingan II: "; cin>> nilaipertandingan2;
cout << "Nilai Pertandingan III: "; cin>> nilaipertandingan3;
nilairatarata = hitungRataRata (nilaipertandingan1, nilaipertandingan2, nilaipertandingan3);
if(nilairatarata >= 85 ) { 
   hadiah = " komputer Core 15 ";
}
else {
   if (nilairatarata >= 70 ) {
   hadiah = " uang sebesar Rp.2.500,000 ";
   }
else {
   if (nilairatarata <= 70 ) {
   hadiah = " Mendapat hadiah hiburan " ;
   }
}
cout << "Siswa yang bernama "<< namaSiswa << endl;
cout << "memperoleh nilai rata-rata" << nilairatarata << "dari perlombaan yang diikutinnya"<<endl;
cout << "Hadiah yang didapat adalah "<< hadiah << endl; 
cout << "Pengkondisian nested if" << endl;
cout << "=================================================================="<<endl;
cout << endl;

//Pengkondislan if else majemuk

cout << "Program Hitung Nilai Rata Rata" << endl;
cout << "Nama Siswa : ";cin.ignore(); getline(cin, namaSiswa);
cout << "Nilal Pertandingan I : "; cin >> nilaipertandingan1;
cout << "Nilal Pertandingan II: "; cin>> nilaipertandingan2;
cout << "Nilai Pertandingan III:"; cin>> nilaipertandingan3;
nilairatarata = hitungRataRata(nilaipertandingan1, nilaipertandingan2, nilaipertandingan3);
if(nilairatarata >= 85) {
hadiah = " Komputer Core i5 ";
}
else if(nilairatarata >= 70) {
 hadiah = " Uang sebesar Rp.2.500,000 ";
}
else if(nilairatarata <= 70 ) {
hadiah = " liburan ke oyo ";
}
cout << "Siswa yang bernama "<< namaSiswa <<endl; 
cout << "memperoleh nilai rata-rata "<< nilairatarata << "dari hasil perlombaan yang diikutinya" << endl;
cout << "Hadiah yang didapat adalah "<< hadiah << endl;
cout << "Pengkondisian if else majemuk" << endl;
cout <<"==================================================================================="<< endl;
cout << endl;

//Pengkondisian switch case

cout << "Program Hitung Nilai Rata-Rata" << endl;
cout << "Nama Siswa:"; cin.ignore(); getline(cin, namaSiswa);
cout << "Nilal Pertandingan I: "; cin>> nilaipertandingan1; 
cout << "Nilal Pertandingan II: "; cin>> nilaipertandingan2;
cout << "Nilai Pertandingan III:"; cin>> nilaipertandingan3;
nilairatarata = hitungRataRata(nilaipertandingan1, nilaipertandingan2, nilaipertandingan3);
switch(nilairatarata >= 85 ) {
 case 1:
 hadiah = " Komputer Core i5 ";
 break;
}
switch(nilairatarata >= 70 ) { 
case 1:
hadiah = " Uang sebesar Rp.2.500.000 ";
break;
}
switch(nilairatarata <= 70 ) {
case 1:
hadiah = " liburan ke oyo " ;
break;
}
cout << "Siswa yang bernama" << namaSiswa << endl; 
cout << "memperoleh nilai rata-rata" << nilairatarata << "dari hasil perlombaan yang diikutinnya "<<endl;
cout << "Hadiah yang didapat adalah hadiah "<< hadiah << endl;
cout << "Pengkondisian switch case" << endl;
cout <<"=================================================================================="<<endl;
cout << endl;
  

}
}
