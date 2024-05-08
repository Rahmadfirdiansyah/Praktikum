#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char kata[100];
	clrscr();
	
	cout<<"masukkan huruf kecil : ";
	gets(kata);
	strupr(kata);
	
	cout<<"hasil : "<<kata;
	getch(); 
}
