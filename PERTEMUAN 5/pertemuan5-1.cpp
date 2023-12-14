#include <iostream>
using namespace std;

int main(){
	
	int a , b;
	char lagi;
    atas:
    cout<<"masukan bilngan: ";
    cin>>a;
    b=a%2;
    cout<<"nilai a %2 adalah: ";
    cout<<"hasil: "<<b;
    cout<<"\n\ingin hitung lagi [Y/T]: ";cin>>lagi;
    cout<<endl;
    lagi= getchar();
    if (lagi =='y'|| lagi=='Y');
    goto atas;
    getchar();
}
