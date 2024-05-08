#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

main(){
	ofstream simpan;
	char nama[20];
	int harga, jumlah, jumlahx, total=0, p;
	
	simpan.open("Nota01.txt");
	for(int i=1;i<6;i++){
		cout<<"Pembelian Barang ke-"<<i<<endl;
		cout<<"====================="<<endl;
		cout<<"Nama Barang		 :"; cin>>nama;
		cout<<"Harga Satuan		 :"; cin>>harga;
		cout<<"Jumlah yang Dibeli:"; cin>>jumlah;
		jumlahx=jumlah*harga;
		total=total+jumlahx;
		ulang:
		cout<<"Ada barang lain lagi yang dibeli (maks 5)? (1/0):"; cin>>p;
		if(p==1){
			cout<<endl;;
		}
		else if(p==0){
			goto next;
		}
		else{
			cout<<"Input yang anda masukkan salah"; goto ulang;
		}
	}
	next:
	simpan<<"NOTA BELANJA"<<endl;
	simpan<<"TOKO BUKU GRALEKTROMEDIA"<<endl;
	simpan<<"================="<<endl;
	simpan<<"|no|nama barang|harga satuan|total harga|"<<endl;
	for(int i=1;i<6;i++){
		simpan<<"|"<<i<<"|"<<nama<<"|"<<harga<<"|"<<jumlah<<"|"<<jumlahx<<"|"<<endl;
	}
	simpan<<"================="<<endl;
	simpan<<"total belanja (RP)                              |          "<<total<<"|"<<endl;
	simpan<<"=================";
	simpan.close();
	
	return 0;
}
