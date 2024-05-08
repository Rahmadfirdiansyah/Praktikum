#include<iostream>
using namespace std;

int main(){
	int a[5];
 int *p;
 a[0]=24;
 a[1]=32;
 a[2]=81;
 a[3]=44;
 a[4]=23;
 p=&a[0];
 cout<<"alamat p : "<<p<<endl;
 cout<<"nilai p : "<<*p<<endl;
	return 0;
}
