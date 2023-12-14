#include <iostream>

using namespace std;

int main()
{
	
	int x , bil=0 ; //variable 
	cout<<"masukan bilngan pembatas akhir: ";//menampilkan info pematas akhir
	cin>> x;//unutuk memasukan variable x kedalam cout/penampil
	do//melakukan perintah
	{
		if(bil >= x)//kondisi jika bilngan lebih dari inputan(variable x) maka akan masuk ke line bawah
	      break;//untuk menghentikan perulangan 
	      cout<<bil<<" ";//untuk menaplilkan variable bil
	}
	while(bil+=4);//menambahkan variable bil dengan angka 4
	getchar();//untuk menampilkan karakter char     
	
}
