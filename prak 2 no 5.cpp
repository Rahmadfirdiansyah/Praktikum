#include <iostream> 
using namespace std;
  
int main(int argc, char *argv[]){ 
        int A[2][2]={4, 8, 2, 10}; 
        int transpose[2][2]; 
         
        cout<<"?Array A"<<endl; 
        for(int i=0;i<2;i++){ 
                for(int j=0;j<2;j++){ 
                        cout<<A[i][j]<<" "; 
                } 
                cout<<endl; 
        } 
         
        for(int i=0;i<2;i++){ 
                for(int j=0;j<2;j++){ 
                        transpose[j][i] = A[i][j]; 
                } 
                cout<<endl; 
        } 
         
        cout<<?"?Hasil transpose Array A = ?"?<<endl; 
        ?for?(?int? i=?0?;i<?2?;i++){ 
                ?for?(?int? j=?0?;j<?2?;j++){ 
                        cout<<transpose[i][j]<<?"? ?"?; 
                } 
                cout<<endl; 
        } 
         
        ?return? ?0?; 
}
