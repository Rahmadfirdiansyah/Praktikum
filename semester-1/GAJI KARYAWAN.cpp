#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <string>
using namespade std;
	
int main()
{
first :
	string NIK, JWB :
char NAMA [100 ];
int JENIS_KELAMIN, STATUS, KENNDARAAN;
long double GAJI_POKOK, UANG_MAKAN, TUNJANGAN, TRANSPORT, GAJI_KOTOR, PAJAK, GAJI_BERSIH;
    
    cout<<"\n\t PROGRAM GAJI KARYAWAN\n";
    cout<<"\n\t-------------------------------";
    cout<<"\n\t NAMA : ";gets (NAMA);
    cout<<"\n\t NIK : ";cin>>NIK;
	cout<<"\n\t-------------------------------";
	cout<<"\n\t [0= LAKI-LAKI, 1= PEREMPUAN]";
	cout<<"\n\t jenis kelamin : ";cin>>JENIS_KELAMIN;
	cout<<"\n\t-------------------------------";
	cout<<"\n\t [0= single, 1= menikah]";
	cout<<"\n\t status pernikahan : ";cin>>STATUS;
	cout<<"\n\t-------------------------------";
	cout<<"\n\t [0= motor 1= mobil";
	cout<<"\n\t kendaraan : ";cin>>KENDARAAN;
	cout<<"\n\t-------------------------------";
	cout<<"\n\t gaji pokok : Rp ";cin>>GAJI_POKOK;
	cout<<"\n\t-------------------------------";
	cout<<"\n\t uang makan : Rp ";cin>>UANG_MAKAN;
	//TUNJANGAN
	if (JENIS_KELAMIN== 0 && status==1)
{
	tunjangan = 500;
	cout<<"TUNJANGAN = "<<TUNJANGAN<<endl;
}
else
{
//TRANSPORT
if (kendaraan==1)
{
	transport = 1000;
	cout<<"transport = "<<TRANSPORT<<endl;
}
else if (kendaraan==0)
{
    transport = 0;
    cout<<"transport = "<<TRANSPORT<<endl;
}
    GAJI_KOTOR=GAJI_POKOK+TUNJANGAN+UANG_MAKAN+TRANSPORT;
    cout<<"GAJI KOTOR="<<GAJI_POKOK<<"+"<<TUNJANGAN<<"+"<<UANG_MAKAN<<"+"<<TRANSPORT<<"="<<GAJI_KOTOR<<endl;
    pajak=0.05*GAJI_KOTOR;
    cout<<"pajak="<<0.05<<"*"<<GAJI_KOTOR<<"="<<PAJAK<<endl;
    
    GAJI_BERSIH=GAJI_KOTOR-PAJAK;
    cout<<"GAJI_BERSIH="<<GAJI_KOTOR<<"-"<<PAJAK<<"="<<GAJI_BERSIH<<endl;
    
return 0:
}
