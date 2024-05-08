#include<iostream>
#define SPACE 10
using namespace std;

class TreeNode {
    //membuat struktur BST
  public:
    int value;
  TreeNode * left;
  TreeNode * right;

  TreeNode() {
    value = 0;
    left = NULL;
    right = NULL;
  }
  TreeNode(int v) {
    value = v;
    left = NULL;
    right = NULL;
  }
};

class BST {
  public:
    TreeNode * root;
  BST() {
    root = NULL;
  }
  bool isTreeEmpty() {
    if (root == NULL) {
      return true;
    } else {
      return false;
    }
  }
  //-----------//
  
//membuat fungsi penginputan node BST
  void insertNode(TreeNode * new_node) {
    if (root == NULL) {
      root = new_node;
     
    } else {
      TreeNode * temp = root;
      while (temp != NULL) {
        if (new_node -> value == temp -> value) {
         
          return;
        } else if ((new_node -> value < temp -> value) && (temp -> left == NULL)) {
          temp -> left = new_node;
          break;
        } else if (new_node -> value < temp -> value) {
          temp = temp -> left;
        } else if ((new_node -> value > temp -> value) && (temp -> right == NULL)) {
          temp -> right = new_node;
          break;
        } else {
          temp = temp -> right;
        }
      }
    }
  }
  	TreeNode* insertRecursive(TreeNode *r, TreeNode *new_node)
	{
		if(r==NULL)
		{
			r=new_node;
			cout <<"nilai sukses dimasukkan"<<endl;
			return r;
		}
	
		if(new_node->value < r->value)
		{
			r->left = insertRecursive(r->left,new_node);
		}
		else if (new_node->value > r->value)  
		{
			r->right = insertRecursive(r->right,new_node);
		}
	   else
	   {
	     	cout << "nilai tersebut sudah terisi!" << endl;
	     	return r; 
		}
		return r;
	}
//-----------//

//print BFS
  void print2D(TreeNode * r, int space) {
    if (r == NULL) // Base case  1
      return;
    space += SPACE; 
    print2D(r -> right, space); // anak kanan
    cout << endl;
    for (int i = SPACE; i < space; i++) 
      cout << " ";  
    cout << r -> value << "\n"; 
    print2D(r -> left, space); // anak kiri
  }

  void printPreorder(TreeNode * r) 
  {
    if (r == NULL)
      return;
   /* print node */
    cout << r -> value << " ";
    /* mengisi tree kiri */
    printPreorder(r -> left);
    /* mengisi tree kanan */
    printPreorder(r -> right);
  }

  void printInorder(TreeNode * r) 
  {
    if (r == NULL)
      return;
      /* print node */
    cout << r -> value << " ";
	/* mengisi anak kiri */
    printInorder(r -> left);
    /* mengisi anak kanan */
    printInorder(r -> right);
  }
  void printPostorder(TreeNode * r) 
  {
    if (r == NULL)
      return;
    printPostorder(r -> left);
    printPostorder(r -> right);
    cout << r -> value << " ";
  }

  int height(TreeNode * r) {
    if (r == NULL)
      return -1;
    else {
    	//menghitung tinggi setiap pohon
      int lheight = height(r -> left);
      int rheight = height(r -> right);

      if (lheight > rheight)
        return (lheight + 1);
      else return (rheight + 1);
    }
    //-------
  }

  /* Print node */
  void printGivenLevel(TreeNode * r, int level) {
    if (r == NULL)
      return;
    else if (level == 0)
      cout << r -> value << " ";
    else 
    {
      printGivenLevel(r -> left, level - 1);
      printGivenLevel(r -> right, level - 1);
    }
  }
  void printLevelOrderBFS(TreeNode * r) {
    int h = height(r);
    for (int i = 0; i <= h; i++)
      printGivenLevel(r, i);
  }

  TreeNode * minValueNode(TreeNode * node) {
    TreeNode * current = node;

    while (current -> left != NULL) {
      current = current -> left;
    }
    return current;
  }
};

int main() {
  BST obj;
  int pilihan, nilai_node,i;

  do {
    cout << "pilih opsi yang ingin anda tuju" << endl;
     cout << "ketik" << endl;
    cout << "1. memasukkan node" << endl;
    cout << "2. print bfs semua node" << endl;
    cout << "0. exit" << endl;

    cin >> pilihan;
    //Node n1;
    TreeNode * new_node = new TreeNode();

    switch (pilihan) {
    case 0:
      break;
    case 1:
      	cout <<"masukkan"<<endl;
	      cout <<"masukkan angka node yang ingin di masukkan BST: ";
	      cin >> nilai_node;
	      new_node->value = nilai_node;
	      obj.root= obj.insertRecursive(obj.root,new_node);
	      //obj.insertNode(new_node);
	      cout<<endl;
    		break;
      

    case 2:
      cout << "PRINT 2D BFS: " << endl;
      obj.print2D(obj.root, 5);
      cout << endl;
      cout << "Print Level Order BFS: \n";
      obj.printLevelOrderBFS(obj.root);
      cout << endl;
      
      break;
    }

  } while (pilihan != 0);

  return 0;
}
