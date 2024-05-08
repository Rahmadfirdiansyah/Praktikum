#include <iostream>
using namespace std;
//menggunakan tipe data class untuk menyimpan banyak fungsi
template <class T>
class BinaryTree //fungsi bst
{
	//struct node
    private:
        struct TreeNode
        {
            TreeNode *left;
            TreeNode *right;
            T data;
        };
        TreeNode *root;

    public:
//---membuat fungsi BST--
        BinaryTree()
        {
            root = NULL;
        }

        void Inorder(TreeNode *n)
        {
            if(n != NULL)
            {
                Inorder(n -> left);
                cout<< n -> data;
                Inorder(n -> right);
            }
        }
        
        void PrintInorder()
        {
           Inorder(root);
        }        

        void InsertData(T data)
        {
            TreeNode *t = new TreeNode;
            TreeNode *parent;
            t -> data = data;
            t -> left = NULL;
            t -> right = NULL;
            parent = NULL;

            
            if (isEmpty())
                root = t;
            else
            {
               TreeNode *curr;
               curr = root;
               while(curr)
               {
                   parent = curr;
                   if (t -> data > curr -> data)
                        curr = curr -> right;
                   else
                        curr = curr -> left;
               }
               if(t -> data < parent -> data)
                    parent -> left = t;
               else
                    parent -> right =t;
            }
        }

        bool isEmpty()
        {
            return (root == NULL);
        }
};

//-----------

int main(){
//penginputan data
{
	cout <<"masukkan data data :" <<endl;
}

    BinaryTree <char> BT;
    char num;
    while (cin >> num)
{
    BT.InsertData(num);
}
//print hasil
cout << "sortingan BST: ";
BT.PrintInorder();
cout << endl;         
    
    return 0;
}
