#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int i, j, nilai, jmlsmt, jmlmk, sks[50][30], jumlahnilai, skssmt[14], jumlahsks, totalsks=0;
  char x,mk[30], nilaihuruf[50][30], matkul[50][50][30];
  float ipk,nr[14], totalnr=0;
 
  cout << "\tProgram Menghitung IPK Mahasiswa\n";
 menu:
  cout << "Masukkan jumlah semester: ";
  cin >> jmlsmt;
  if (jmlsmt < 2 || jmlsmt > 14) {
    cout << "Jumlah semester salah!\n";
    return 0;
  }
  else {
    for (i = 0; i < jmlsmt; i++) {
      jumlahnilai = 0;
      jumlahsks = 0;
      cout << "Masukkan jumlah mata kuliah semester " << i + 1 << ": ";
      cin >> jmlmk;
      if (jmlmk < 2) {
        cout << "Jumlah mata kuliah kurang dari 2 setiap semester\n";
        return 0;
      }
      else {
        for (j = 0; j < jmlmk; j++) {
          cout << "Masukkan mata kuliah ke " << j + 1 <<"\n";
          cout << "Masukkan nama matkul: ";
          cin >> matkul[i][j];
          cout << "Masukkan jumlah sks matkul: ";
          cin >> sks[i][j];
          cout << "Masukkan nilai matkul: ";
          cin >> nilaihuruf[i][j];
          cout << "--------------------------------------------\n";
          if (nilaihuruf[i][j] == 'A') {
            nilai = 4 * sks[i][j];
          }
          else if (nilaihuruf[i][j] == 'B') {
            nilai = 3 * sks[i][j];
          }
          else if (nilaihuruf[i][j] == 'C') {
            nilai = 2 * sks[i][j];
          }
          else if (nilaihuruf[i][j]=='D') {
            nilai = 1 * sks[i][j];
          }
          else if (nilaihuruf[i][j]=='E') {
            nilai = 0 * sks[i][j];
          }
          else {
            cout << "Input salah!\n";
            return 0;
          }
          jumlahnilai = jumlahnilai + nilai;
          jumlahsks = jumlahsks + sks[i][j];
        }
        if(jumlahsks > 24){
          cout << "Jumlah SKS semester lebih dari 24\n";
          return 0;
        } else {
          skssmt[i] = jumlahsks;
          nr[i] = jumlahnilai / jumlahsks;
        }   
      }
    }
  }
  cout << "==============================================\n";
  cout << "\t\tTranskrip Nilai\n";
  cout << "==============================================\n";
  for(i = 0; i < jmlsmt; i++){
    cout << "\nHasil Semester"<<i+1<< ":\n";
    cout << endl << setw(12) << "Mata Kuliah" << setw(12) << "SKS" << setw(12) << "Nilai\n";
    for(j = 0; j < jmlmk; j++){
      cout << endl << setw(12) << matkul[i][j] << setw(12) << sks[i][j] << setw(12) << nilaihuruf[i][j];
    }
    cout << "\n\nSKS\t: " << skssmt[i] << endl;
    cout << fixed << setprecision(2) << "NR\t: " << nr[i] << endl;
    totalsks = totalsks + skssmt[i];
    totalnr = totalnr + nr[i];
    cout << "--------------------------------------------\n";
  }
  ipk = totalnr/jmlsmt;
  cout << "\nTotal SKS\t: "<< totalsks << endl;
  cout << fixed << setprecision(2) << "IPK\t\t: " << ipk << endl;
  cout <<"==============================================\n";
  cout<<"Hitung Lagi [Y/N] ? "; cin>> x;
	if (x == 'y' || x == 'Y'){
		//system ("cls");
		goto menu;
	}
	else if (x == 'N' || x == 'n')
  
  return 0;
}
