//program fibonacci rekursif
#include <iostream>
using namespace std;
//pembuatan fungsi bernama fibonacci reqursif yang bertipe int bervariable n
int fibonacci (int n){
	//pembuatan fungsi n, jika n itu  0 atau 1 maka outputnya angka itu sendiri
	if (n == 0 || n == 1){
		return n;
		//jika n bukan 0 atau 1 maka terjadilah operasi reqursif
		//yaitu (n-1)+(n-2)
	}else {
		return (fibonacci (n-1)+(n-2));
	}
}
int main(){
	//variable yang akan di deklarasikan
	int n, i, k =0; 
	//n untuk berapa barisan atau berapa batas jumlah bilangan
	//i untuk looping atau perulangan
	//k untuk memasukkan nilai fibonacci selanjutnnya secara  urut
	cout <<"Angka Fibonacci Ke :";
	//penginputan nilai yang akan dimasukkan ke variable n
	cin >> n;
	cout <<"Hasil Angka Fibonacci : \n";
	//membuat looping sebanyak nilai n
	//lalu menginputkan nilai k kedalam fungsi fibonacci
	for(int i=1;i<=n;i++){
		cout <<"f"<<i<<":";
		//output fibonacci
		cout <<fibonacci (k)<<endl;
		k++;
	}
	return 0;
}
