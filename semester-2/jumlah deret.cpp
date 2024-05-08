#include <iostream>
using namespace std;
 
int main(){
    int a=3, b=4, c, jumlah=0, i, n;
    char x;
    cout << " |-----------------------| " <<endl;
    cout << " |MENGHITUNG JUMLAH DERET| " <<endl;
    cout << " |-----------------------| " <<endl;
    cout << "\n";
    cout << " Nilai Awal (a) = 3 dan Beda (b) = 4 " <<endl;
    cout << " Sn = n/2(2a+(n-1)b) " <<endl;
	cout << "\n";	
    cout << " Masukkan Deret ke-n : ";	cin >>n;
     
    cout << " Deret ke-"<<n<<" : ";
    cout <<a<<",";
    jumlah=jumlah+a; 
    for(i=0; i<n-1; i++){
             c=a+b;
             a=c;
             cout<<c<<",";
             jumlah=jumlah+c;                      
    }
    cout << "\n";
    cout << " \n Jumlah deret ke- "<<n<<" : ";
    cout <<jumlah; 
    cout <<endl;

    return 0;    
}
