#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	char kata[20];
	float angka, a ,b;
	
	cout<<"masukan sembarang kata berupa angka: ";
	cin>> kata;
	angka = atol(kata);
	a = angka + 8;
	cout<<"hasil perubahan ditambah dengan 7: "<<a;
	getchar();
}
