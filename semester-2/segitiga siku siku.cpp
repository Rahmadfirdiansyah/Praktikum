#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

main(){
	menu:
	long int a, t, c, l, k, pl;
	cout<<"==========================================="<<endl;
	cout<<"Menu Operasi Segitiga Siku-Siku"<<endl;
	cout<<" 1.Sisi Miring Segitiga Siku-Siku"<<endl;
	cout<<" 2.Luas Segitiga Siku-Siku"<<endl;
	cout<<" 3.Keliling Segitiga Siku-Siku"<<endl;
	cout<<" 4.Mengakhiri Program"<<endl;
	cout<<"==========================================="<<endl;
	cout<<" Pilih Menu Yang Di Inginkan="; cin>>pl;
	cout<<" Press Any Key To Continue...."; getch ();
	system("cls");
	if(pl==4){
		goto done;
	}
	
	
	cout<<"==========================================="<<endl;
	cout<<" Masukkan Data "<<endl;
	cout<<" Alas Segitiga Siku-Siku="; cin>>a;
	cout<<" Tinggi Segitiga Siku-Siku="; cin>>t;
	cout<<"==========================================="<<endl;
	cout<<" Press Any Key To Continue"; getch();
	system("cls");
	
	c= sqrt((a*a)+(t*t));
	l=0.5*a*t;
	k=a+t+c;
	
	switch(pl){
		case 1:{
			cout<<"==================================="<<endl;
			cout<<" Hasil Sisi Miring Segitiga Siku-Siku="<<c<<endl;
			cout<<"==================================="<<endl;
			cout<<" Press Any Key To Continue...."; getch();
			system("cls"); goto menu;
			break;
		}
		case 2:{
			cout<<"==================================="<<endl;
			cout<<" Hasil Luas Segitiga Siku-Siku="<<l<<endl;
			cout<<"==================================="<<endl;
			cout<<" Press Any Key To Continue...."; getch();
			system("cls"); goto menu;
			break;
		}
		case 3:{
			cout<<"==================================="<<endl;
			cout<<" Hasil Keliling Segitiga Siku-Siku="<<k<<endl;
			cout<<"==================================="<<endl;
			cout<<" Press Any Key To Continue...."; getch();
			system("cls"); goto menu;
			break;
		}
	}
	
	done:
	cout<<" Terima Kasih Telah Menggunakan Program Ini"<<endl;
	cout<<" Press Any Key To End The Program...."; getch();
	
}
