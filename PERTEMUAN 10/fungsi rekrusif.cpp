#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

int pangkat(int a, int b){
	int hasil = a;
	   for(int i; i < b; i++){
	   return hasil = pow(a,b);
       }
	return hasil;
}

int main()
{
	int a;
	int b;
	cout<<" masukan nilai Y: ";
	cin >> a;
	cout<< "masukan nilai X: ";
	cin >> b;
	cout<< a << " dipangkat " << b << " adalah: " << pangkat(a,b) << endl;
	
	
}
