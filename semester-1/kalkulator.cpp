#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
using namespace std;

main(){
	int x, y, opr;
	float eq;
	string op;
	
	//input
	cout<<" Kalkulator"<<endl<<endl;
	cout<<"*Keterangan Operasi Hitung:"<<endl;
	cout<<" 1 = Tambah"<<endl;
	cout<<" 2 = Kurang"<<endl;
	cout<<" 3 = Kali"<<endl;
	cout<<" 4 = Bagi"<<endl;
	cout<<" 5 = Modulo"<<endl;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl<<endl;
	cout<<"Masukkan Bilangan Pertama= "; cin>>x;
	cout<<"Masukkan Operasi Hitung= "; cin>>opr;
	cout<<"Masukkan Bilangan Kedua= "; cin>>y;
	
	switch(opr){
		case 1 : eq=x+y;
		op=" + ";
		break;
		
		case 2 : eq=x-y;
		op=" - ";
		break;
		
		case 3 : eq=x*y;
		op=" x ";
		break;
		
		case 4 : eq=x/y;
		op=" / ";
		break;
		
		case 5 : eq=x%y;
		op=" % ";
		break;
		
		default :
			cout<<"Operasi Aritmatika Salah"<<endl;
	}
	
	cout<<"Hasil Operasi Aritmatika Sebagai Berikut"<<endl;
	cout<<x<<op<<y<<" = "<<eq;
	getch();
}
