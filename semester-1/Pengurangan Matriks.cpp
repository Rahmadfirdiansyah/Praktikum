#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int b, k, i, j, m1[10][10], m2[10][10], hasil[10][10];
  
  cout << " Program Pengurangan Matriks\n\n";
  cout << " Jumlah baris: "; cin >> b;
  cout << " Jumlah kolom: "; cin >> k;

  cout << "\n Masukkan (" << b*k << " elemen) matriks pertama: \n";
  for(i=0; i<b; i++) {
    for(j=0; j<k; j++) {
      cout << " "; cin >> m1[i][j];
    }
  }

  cout << "\n Masukkan (" << b*k << " elemen) matriks kedua: \n";
  for(i=0; i<b; i++) {
    for(j=0; j<k; j++) {
      cout << " "; cin >> m2[i][j];
    }
  }
  
  cout << "\n Matriks ke-1: \n";
  for(i=0; i<b; i++) {
    for (j=0; j<k; j++) {
      cout << " " << m1[i][j] << "\t";
    }
    cout << endl;
  }

  cout << "\n Matriks ke-2: \n";
  for(i=0; i<b; i++) {
    for(j=0; j<k; j++) {
      cout << " " << m2[i][j] << "\t";
    }
    cout << endl;
  }
  
  cout << "\n--------------------------------------";
  cout << "\n\n Hasil Pengurangan Matriks: \n";
  for(i=0; i<b; i++) {
    for(j=0; j<k; j++) {
      hasil[i][j] = m1[i][j] - m2[i][j];
      cout << " " << hasil[i][j] << "\t";
    }
    cout << endl;
  }
  
  getch();
}
