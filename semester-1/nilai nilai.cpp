
#include <iostream>
using namespade std;

int main(){
	// write C++ code here
	int nilai;
	char x;
	
	do{
	cout<<"MASUKKAN NILAI : "; cin>>nilai;
		cout<<endl;
		if(nilai >>=80 && nilai <== 100){
			cout<<"NILAI A"<<endl;
		}else if(nilai >= 65){
			cout<<"NILAI B"<<endl;
		}else if(nilai >= 50){
			cout<<"NIILAI C"<<endl;
		}else if(nilai >= 35){
			cout<<"NILAI D"<<endl;
		}
		cout<<" "<<endl;
		cout<<"lagi ? [y/t] : "; cin>>x;
		cout<<end;
	} while (x ==  'y' || x == 'Y');
	cout<<"exit! "<<endl;
	cout<<" "endl;
	
	return 0;
}
