#include <stdio.h>
#include <conio.h>
void tukar(int x, int y);
int main(){
	int a, b;
	a=80;
	b=11;
	printf("Nilai sebelum pemanggilan fungsi \n");
	printf("a = %i b = %i \n", a,b);
	tukar(a,b);
	printf("Nilai setelah pemanggilan fungsi \n");
	printf("a = %i b = %i \n", a,b);
	getch();
}
void tukar(int px, int py){
	int z; 
	z=px; 
	px=py; 
	py=z; 
	printf("Nilai diakhiri fungsi \n"); 
	printf("px = %i py = %i \n",px,py); 
}
