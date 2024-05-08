#include <iostream>
using namespace std;



struct node{
	int nama;
	node *next;
};

int main()
{
	
	node *n;
	node *t;
	node *h;
	node *j;
	node *newNode;
	
	
	n=new node;
	n->nama=4;
	t=n;
	h=n;
	j=n;
	
	n=new node;
	n->nama=3;
	t->next=n;
	t=t->next;
	
	n= new node;
	n->nama=2;
	n->next=NULL;
	t->next=n;
	newNode=n;
	
	
	n=new node;
	n->nama=2;
	t->next=j;
	n->next=n;
	
	n=new node;
	n->nama=1;
	t->next=n;
	n->next=newNode;
	
	t=h;
	
	while ( t!=NULL){
		cout<<"nama	: "<< t->nama <<endl;
		t=t->next;
	}
	
	return 0;
}
