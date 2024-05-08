#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	float tinggi, alas;
	cout<< " MENGHITUNG SISI MIRING SEGITIGA"<<endl;
	cout<<"\n";
	
	cout << " TINGGI : ";
	cin >> tinggi;
	cout << " ALAS : ";
	cin >> alas;
	
	cout << " SISI MIRING = "<<sqrt(alas*alas+tinggi*tinggi)<<endl;
	cout << " LUAS = "<<alas*tinggi<<endl;
	cout << " KELILING = "<<tinggi+alas+sqrt(alas*alas+tinggi*tinggi)<<endl;
	
	return 0;
}
