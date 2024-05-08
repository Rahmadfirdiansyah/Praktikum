#include <iostream>
using namespace std;

struct Node {
	int k;
	int p;
	Node *next;
};

class linkedlist{
	private:
		Node *head;
	public:
		linkedlist(){
			head = NULL;
		}
		void insertBilPolinom(int a, int b){
			Node *insert = new Node();
			Node *p = head;
			Node *temp;
			insert->k = a;
			insert->p = b;
			if (b>=p->p) {
				if (insert->p==p->p){
					p->k = insert->k+p->k;
				}else{
					setBilPolinom(a, b);
				}

			} else if (b==0) {
				while (p->next!=NULL){
					p = p->next;
				}
				if (insert->p==p->p){
					p->k = insert->k+p->k;
				}else{
					p->next = insert;
				}
			} else {
				while (b<p->p){
					temp = p;
					p = p->next;
				}
				if (insert->p==p->p){
					p->k = insert->k+p->k;
					temp->next = p;
				}else{
					temp->next = insert;
					insert->next = p;
				}
			}
		}

		void setBilPolinom(int a, int b){
			Node *bil = new Node();			
			bil->k = a;			
			bil->p = b;			
			bil->next = head;			
			head = bil;			
		}

		void hapusBilPolinom(int a, int b){
			Node *hapus = head;
			Node *temp;
			if(hapus->k==a && hapus->p==b){
				head = hapus->next;
				delete hapus;
		}else{
			while(hapus->k!=a && hapus->p!=b){
				temp = hapus;
				hapus = hapus->next;
			}	
			temp->next = hapus->next;
			delete hapus;
		}
	}
	
		void Tampilkan(){
			Node *c = head;
			while (c != NULL) {
				if(c == head){
					cout << c->k << "x^" << c->p;			
				}else if(c->p == 0){			
					if (c->k>0) {			
						cout << "+" << c->k;			
					}else if (c->k<0){			
						cout << c->k;			
					}
				}else{
					if (c->k>0) {			
						cout << "+" << c->k << "x^"	<< c->p;			
					}else if (c->k<0){			
						cout << c->k << "x^" << c->p;			
					}			
				}
				c = c->next;
			}
		}
};

void Menu()
{
	int pilihan, koefisien, pangkat;
	linkedlist list;
	cout << "****************************"<<endl;
	cout << " Program Manipulasi Polinom "<<endl;
	cout << "****************************"<<endl;
	list.setBilPolinom(15,0);
	list.setBilPolinom(1,3);
	list.setBilPolinom(5,5);
	list.setBilPolinom(8,7);
	list.setBilPolinom(6,8);
	list.Tampilkan();
	cout << endl << "Menu: " << endl;
	cout << "1. Menyisipkan bilangan"<<endl;
	cout << "2. Menghapus bilangan"<<endl;
	cout << "Masukkan Pilihan Anda :";
	cin >> pilihan;
	
	if(pilihan==1){
		cout << endl << "Masukkan koefisien dari bilangan: ";
		cin >> koefisien;
		cout << "Masukkan pangkat dari bilangan: ";
		cin >> pangkat;
		list.insertBilPolinom(koefisien, pangkat);
		cout << "Polinom Setelah Disisipkan: ";
		list.Tampilkan(); 
	}else if(pilihan==2){
		cout << endl << "Masukkan koefisien bilangan: ";
		cin >> koefisien;
		cout << "Masukkan pangkat bilangan: ";
		cin >> pangkat;
		list.hapusBilPolinom(koefisien, pangkat);
		cout << "Bentuk Polinom setelah di hapus: ";
		list.Tampilkan(); 
	}else{
		cout<<"Pilihan anda tidak ditemukan";
	}
}	

int main(){
	Menu();
}
