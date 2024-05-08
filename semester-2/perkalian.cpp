#include <iostream>
#include <conio.h>
using namespace std ;
 
int main() 
{
	menu:
	int A,B, jwb;
	cout << " \n\t\t Tabel Perkalian \n\n " ;
	cout<<"Angka Pertama="; cin>>A;
	cout<<"Angka Kedua="; cin>>B;
	cout<<"Apakah Input Di Atas Benar?(0=tidak dan mengisi kembali,1=iya)="; cin>>jwb;
	
	if(jwb==0){
		system("cls");
		goto menu;
	}
	else if(jwb==1){
		system("cls");
	}
   
    for (int i=1; i<=A; i++) {
        for (int j=1; j<=B; j++) {
            cout << i*j << "\t " ;
        }
            cout << endl << endl ;
    }
    
    cout<<endl;
    cout<<"Press Any Key To End Program"; getch ();
}
