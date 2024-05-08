#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){
	int b[1000], c[1000], n;
	char a[1000][30];
	float rata_pertahun, rata_tk, rata_te;

	cout<<"Input:\n\n";
	cout<<"Masukan banyak data yang diinput = "; cin>>n;
	cout<<endl<<endl;

	for (int i=0;i<n;i++){
		cout<<"Data ke-"<<i+1<<endl;
		cout<<"Tahun Prodi     : ";
  		scanf(" %[^\n]s",a[i]);
  		cout<<"Teknik Komputer : "; cin>>b[i];
  		cout<<"Teknik Elektro  : "; cin>>c[i];
	}

	 system("cls");
 	cout<<"Output:\n\n";
 	cout<<"\t\t     DATA KELULUSAN MAHASISWA "<<endl;
	cout<<"\t\t\t     2015-2016       "<<endl;
	cout<<" -------------------------------------------------------------- "<<endl;
	cout<<"| Tahun Prodi  |  Teknik  | Teknik  |  Rata-rata kelulusan per |"<<endl;
	cout<<"|              | Komputer | Elektro |     tahun semua prodi    |"<<endl;
	cout<<" -------------------------------------------------------------- "<<endl;

 	for(int i=0;i<n;i++){
  		cout<<"| "<<setiosflags(ios::left)<<setw(13)<<a[i];
  		cout<<"| "<<setiosflags(ios::left)<<setw(9)<<b[i];
  		cout<<"| "<<setiosflags(ios::left)<<setw(8)<<c[i];
  		rata_pertahun=(b[i]+c[i])*0.5;
  		cout<<"| "<<setiosflags(ios::left)<<setw(24)<<rata_pertahun<<" |";
		cout<<"\n|--------------------------------------------------------------|\n";
	}
	rata_tk=(b[0]+b[1])*0.5;
	rata_te=(c[0]+c[1])*0.5;
	cout<<"|  Rata-rata   |          |         |                          |"<<endl;
	cout<<"| pertahun per | "<<setiosflags(ios::left)<<setw(9)<<rata_tk;
	cout<<"| "<<setiosflags(ios::left)<<setw(8)<<rata_te;
	cout<<"|                          |"<<endl;
	cout<<"|     prodi    |          |         |                          |"<<endl;
	cout<<" -------------------------------------------------------------  "<<endl;

	getch();
	return 0;
}
