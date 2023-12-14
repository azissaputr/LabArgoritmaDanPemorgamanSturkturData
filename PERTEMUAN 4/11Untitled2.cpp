#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int a, b, c, d , e ,  f , g , h, row ,n , m;
	cout<<"================================"<<endl;
	cout<<"|         program ke satu      |"<<endl;
	cout<<"================================"<<endl;
	 for(a=1; a<=5; a++){
		for(b=1; b<=5; b++)
		 cout<<a<<" ";
     	  cout<<endl;
	}
	//soal ke dua
	cout<<"================================"<<endl;
	cout<<"|         program ke dua       |"<<endl;
	cout<<"================================"<<endl;
	cout<<"contoh perulangan"<<endl;
	 for(c=1 ; c<=20; c++)
	 	cout<<c<<endl;{
	  	 cout<<"perulangan menurun"<<endl;
	       for(c=20 ; c>=1; c--){
	    	cout<<c<<endl;
	}
	}
	//soal ke tiga
	cout<<"================================"<<endl;
	cout<<"|         program ke tiga      |"<<endl;
	cout<<"================================"<<endl;
	int nilai;
	bool prima = true;
	cout<<"program menebak bilangan prima"<<endl;
	cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai <= 1) {
        prima = false;
    }
    else {
        for (int i = 2; i <= nilai / 2; ++i) {
            if (nilai % i == 0) {
                prima = false;
                break;
            }
        }
    }

    if (prima) {
        cout << "Termasuk bilangan PRIMA" << endl;
    } else {
        cout << "Bukan termasuk bilangan PRIMA" << endl;
    }

    //soal ke emapat
    cout<<"================================"<<endl;
	cout<<"|         program ke empat     |"<<endl;
	cout<<"================================"<<endl;
	
	cout<<"masukan jumlah row: "; cin>>row;
	for(m = 1; m <= row; m++){
		for(n = m; n <= row; n++){
			cout<< "* ";
		}
	    for(n = 1; n <= (2 * m - 2); n++){
			cout<< "  ";
		}
     	for(n = m; n <= row; n++){
			cout<< "* ";
		}
		cout<<endl;
	}
	for(m = 1; m <= row; m++){
    	for(n = 1; n <= m; n++){
			cout<< "* ";
		}
    	for(n = (2 * m - 2); n < (2 * row - 2); n++){
			cout<< "  ";
		}
    	for(n = 1; n <= m; n++){
			cout<< "* ";
		}
		cout<<endl;
    }
    return 0;
}


