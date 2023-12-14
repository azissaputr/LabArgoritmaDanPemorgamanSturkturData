#include <iostream>
using namespace std;

int main(){
	
	int a=3 , b=2 , c=1 , i ;
	
	cout<<"Bill A | Bill B | Bill C";
	cout<<"\n===========================";
	for(i=1; i<=10; i++){
	   a+=b ; b+=c ; c+=2 ;
	  cout<<"\n"<<a<<"    "<<b<<"    "<<c;
	  	  if(c==13)
	  break;
	
	}
}
