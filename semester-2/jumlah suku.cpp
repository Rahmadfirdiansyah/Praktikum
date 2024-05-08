#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	cout<<" Program Menghitung Jumlah 6 Suku Pertama"<<endl<<endl;
	int jmldr, i;
	
	cout<<" Jumlah Deret Yang Di Inginkan="; cin>>jmldr;
	cout<<endl;
	
	for(i=1; i<=jmldr; i++){
		cout<<i*i*i<<"";
	}
	getch();
}
