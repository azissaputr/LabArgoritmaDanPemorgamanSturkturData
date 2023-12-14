#include <iostream>
#include <cmath>
using namespace std;
	const double PI = 3.14;
	
	double hitungLuasPersegi(double sisi) {
    return sisi * sisi;
	}
	double hitungLuasLingkaran(double jariJari) {
    return PI * pow(jariJari, 2);
	}
	double hitungLuasTabung(double jarizari, double tinggi) {
    return 2 * PI * jarizari * (jarizari + tinggi);
	}
	void tampilkanPesan(const char* bentuk, double luas) {
    cout << "Luas " << bentuk << " adalah: " << luas << endl;
	}
int main(){
	for(int i=1; i<=2; i++){
	double sisi;
	cout << "Masukan panjang sisi persegi : ";
	cin >> sisi;
	double luasPersegi = hitungLuasPersegi(sisi);
	tampilkanPesan("persegi", luasPersegi);
	}
	cout << "======================================" << endl;
	for(int i=1; i<=2; i++){
	double jariJari;
  	cout << "Masukkan panjang jari-jari lingkaran: ";
    cin >> jariJari;
    double luasLingkaran = hitungLuasLingkaran(jariJari);
	tampilkanPesan("lingkaran", luasLingkaran);
	}
	
	cout << "======================================" << endl;
	for(int i=1; i<=2; i++){
	double tinggi;
	double jarizari;
    cout << "Masukkan panjang jari-jari tabung: ";
    cin >> jarizari;
    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;
    double luasTabung = hitungLuasTabung(jarizari, tinggi);
    tampilkanPesan("tabung", luasTabung);
    cout << endl;
	}
}