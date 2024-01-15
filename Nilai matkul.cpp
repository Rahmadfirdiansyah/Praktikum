#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int nilai, jdata;
	string grd;
	char nama_mk[30], grade[30]=" Grade ", *Tmk, *keterangan;
	Tmk=nama_mk;
	keterangan=grade;
	
	cout << " Progam Menentukan Keterangan Nilai Mata Kuliah\n\n";
	cout << " Jumlah mata kuliah yang akan diinput: "; cin >> jdata;
	
	for (int i=1; i<=jdata; i++) {
		cout << "\n              Data Mata Kuliah ke-" << i << endl;
		cout << "===============================================" << endl;
		cout << " Nama Mata Kuliah  : "; cin >> Tmk;
		cout << " Nilai Mata Kuliah : "; cin >> nilai;
		
		if ((nilai>=90)&&(nilai<=100)) {
			grd="A";
		} else if ((nilai>=80)&&(nilai<90)) {
			grd="B";
		} else if ((nilai>=70)&&(nilai<80)) {
			grd="C";
		} else if ((nilai>=60)&&(nilai<70)) {
			grd="D";
		} else if ((nilai>=50)&&(nilai<60)) {
			grd="E";
		} else {
			grd="Tidak Lulus";
		}
		
		cout << keterangan<<"            : " << grd;
		cout << "\n==============================================="<<endl;
	}
	
	getch();
}
