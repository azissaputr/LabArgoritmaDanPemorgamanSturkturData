#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	char kata[20];
	float angka, a;
	
	cout<<"masukan sembarang angka: ";
	cin>>kata;
	angka = atof(kata);
	a = angka + 5;
	cout<<"hasil perubahan di tambah dengan 5: "<<a;
	getchar();
	
}
