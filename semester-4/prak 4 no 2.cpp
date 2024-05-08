#include <iostream>
using namespace std;



struct node{
	int data;
	node *next;
};

int main()
{
	
	node *n;
	node *t;
	node *h;
	node *bantu;
	node *hapus;
	
	
	n=new node;
	n->data=2;
	t=n;
	h=n;
	
	n=new node;
	n->data=5;
	
	t->next=n;
	t=t->next;
	
	n= new node;
	n->data=8;
	n->next=NULL;
	t->next=n;
	bantu=n;
	
	
	n=new node;
	n->data=7;
	t->next=n;
	n->next=bantu;
	
	hapus=h;
	h= hapus->next;
	delete hapus;
	
	t=h;
	
	while ( t!=NULL){
		cout<<"Data	: "<< t->data <<endl;
		t=t->next;
	}
	
	return 0;
}
//outputnya : 
//Data    : 5
//Data    : 7
//Data    : 8
