#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main(){
	menu:
	char nama[30];
	int jm, totjm, mnt, totmnt, dtk, totdtk, totw, jwb;
	
	cout<<"================================================================"<<endl;
	cout<<"Program Menentukan Harga Billing Warnet"<<endl<<endl;
	cout<<"Masukkan Data"<<endl;
	cout<<"Nama="; cin>>nama;
	cout<<"Lama Jam Bermain="; cin>>jm;
	cout<<"Lama Menit Bermain="; cin>>mnt;
	cout<<"Lama Detik Bermain="; cin>>dtk;
	cout<<"================================================================"<<endl<<endl<<endl;
	system("cls");
	
	totjm=jm*5000;
	totmnt=mnt*2500/30;
	totdtk=dtk*2500/1800;
	totw=totjm+totmnt+totdtk;
	
	cout<<"================================================================"<<endl;
	cout<<"Nama User="<<nama<<endl;
	cout<<"Total pembayaran=Rp."<<totw<<endl;
	
}
