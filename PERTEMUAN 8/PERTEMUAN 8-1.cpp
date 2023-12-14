#include <iostream>
using namespace std;
  int main(){
  
  int a[3][3];
  int b[3]={2001  ,2002 ,2003};
  string c[3];
    for(int i=0 ; i<3 ; i++){
    cout << "Masukkan Nama Barang: ";
       cin >> c[i];
      for(int j=0 ; j<3 ; j++){
       cout << "Masukkan Nilai Untuk a ["<< i <<"]["<< j <<"]: ";
       cin >> a[i][j];
      }
    }
    cout << "HASIL PENJUAL BARANG " <<endl;
    cout << "====================================" <<endl;
    cout << "No Nama Barang   ";
    for( int i=0 ; i<3 ; i++){
        cout << b[i]<< "\t";
    }
    cout << "\n====================================" <<endl;
    for( int i=0 ; i<3 ; i++){
    cout << i+1 << " \t "; 
    cout << c[i] << "\t ";
      for(int j=0 ; j<3; j++){
        cout << a[i][j] << "\t";
      }
      cout << endl;
    }
  }
