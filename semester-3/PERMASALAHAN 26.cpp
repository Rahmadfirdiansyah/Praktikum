#include<stdio.h> 
#include<conio.h> 
#include <stdlib.h>

void tukar(int *px,int *py); /*deklarasi fungsi*/ 

main() { 
	int a,b; 
	system("cls"); 
	a=80; 
	b=11; 
	printf("Nilai sebelum pemanggilan fungsi \n"); 
	printf("a = %i b = %i \n",a,b); 
	tukar(&a,&b); 
	printf("Nilai setelah pemanggilan fungsi \n"); 
	printf("a = %i b = %i \n",a,b); 
	getch(); 
} 
void tukar(int *px,int *py) /* definisi fungsi */ 
{ 
	int z; 
	z=*px; 
	*px=*py; 
	*py=z; 
	printf("Nilai diakhir fungsi \n"); 
	printf("px = %i py = %i \n",*px,*py); 
} 
