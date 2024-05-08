#include<stdio.h>
#define MAKS 40

int p=0;
typedef char tipe;
typedef struct{
	char item[MAKS];
	int count;
}Stack;

void insialisasi(Stack *S){
	S->count=0;
}
int penuh(Stack *S){
	return(S->count==MAKS);
}
int kosong(Stack *S){
	return(S->count==0);
}

void push(tipe x, Stack *S){
	if(penuh(S))
		printf("Stack tidak dapat masuk karena sudah penuh\n");
	else{
		S->item[S->count] = x;
		printf("Stack berada di diindex ke %d\n",x,S->count);
		++(S->count);
	}
}

int pop(Stack *S, char cetak[MAKS]){
	if(kosong(S))
		printf("Stack masih kosong\n");
	else{
		--(S->count);
		cetak[p]=S->item[S->count];
		printf("%c Telah keluar dari stack",S->item[S->count]);
	}
	return p;
}

void isi(Stack *S){
	int a=0;
	printf("Inputkan Stack ");
	while(a < S->count)
	printf("%c", S->item[a++]);
	printf("\n");
}

int main(){
	char cetak[MAKS];
	int a,b;
	int c;
	char input;
	Stack tumpukan;

	insialisasi(&tumpukan);
		printf("Masukkan input\n");
	for(a = 0; a!=MAKS; a++){
		printf("Isi ");
		scanf("%c",&input);
		fflush(stdin);
		if(input == '*' || input == '/' || input == '-' || input == '+'){
			c=pop(&tumpukan, cetak);
			isi(&tumpukan);
			b=0;
			printf("Daftar : ");
			while(b < p)
				printf(" %d\n",cetak[b++]);
		}
		else if (input == '^'){
			break;
		}
		else
			push(input, &tumpukan);
	}
	for(a=0; a<c; a++){
		printf("%c ",cetak[a]);
	}
}
