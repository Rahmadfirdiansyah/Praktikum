//program sortingan menggunakan selection sort
#include<iostream>
using namespace std;

int main(){

//inialisasi variable
    int jumlah_data, tukar, nilai[100];
//inialisasi jumlah angka yang ingin di sorting
    cout << "Masukkan jumlah data: ";
    cin >> jumlah_data;

//--proses looping awal penginputan angka yang akan di masukkan--
    for (int loop = 0; loop < jumlah_data; loop++){
        cout << "Data ke-" << loop+1 << " = " ;
        cin >> nilai[loop];
	    cout << endl;
    }
    
//--proses looping selection sort--
    for (int loop = 0; loop < jumlah_data-1; loop++) {
        tukar = loop;
        int temp;
        
        for(int j = loop+1; j < jumlah_data; j++){
            if(nilai[j] < nilai[tukar]){
                tukar = j;

            }

        }   
        temp = nilai[tukar];
    nilai[tukar] = nilai[loop];
        nilai[loop] = temp;
    }

//--looping untuk menampilkan output yang sudah di sorting--
    for(int i = 0; i < jumlah_data; i++){
        cout << nilai[i] << " ";
    }
    cin.get();
    return 0;
}
