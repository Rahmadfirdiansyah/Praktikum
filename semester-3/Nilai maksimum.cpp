#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 int n,a,min,maks;
 int *Tmin,*Tmaks;
 
 cout<<"========================================"<<endl;
 cout<<"| Program Mencari Nilai Maksimal dari N |"<<endl;
 cout<<"========================================="<<endl;
 cout<<"\n";
 
 cout<<"Masuukan Jumlah Data Bilangan N : "; cin>>n;
 cout<<"=================================="<<endl;
 cout<<"\n";
 
 for (int i=1; i<=n; i++)
 { 
 cout<<"Masukkan Angka Data ke-"<<i<<" : "; cin>>a;
 
 if(i==1){
   min=a;
   maks=a;
   
 }
 else if (min>a){
  min=a;
 }
 else {}
 
 Tmin=&min;
 *Tmin=min;
 Tmaks=&maks;
 *Tmaks=maks;
 }
 cout<<"===================================="<<endl;
 cout<<"\n";
 
 cout<<"Nilai Maksimum Billangan N : "<<*Tmaks<<endl;
 cout<<"Nilai Minimun Bilangan N : "<<*Tmin<<endl;
 
 getch();
   
}
