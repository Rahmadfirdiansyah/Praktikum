#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string input;
    int fotokopi,harga;
     cout << "Apakah anda pelanggan (Y/N) ? ";
        cin >> input;
        cout << "Banyak fotokopi : ";
        cin >> fotokopi ;
    if (input=="Y")
    {
        harga=fotokopi*75;
    }
    else if(input=="N"&&fotokopi<=100)
                {harga=fotokopi*150;}
    else if(input=="N"&&fotokopi<=200&&fotokopi>100)
                {harga=fotokopi*100;}
    else if(input=="N"&&fotokopi>200)
                {harga=fotokopi*100;}
    cout<<"==============================";
    cout<<"\nBayar: Rp. "<<harga;
    cout<<"\n==============================";

getch();
}
