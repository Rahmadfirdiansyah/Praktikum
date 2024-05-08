# include <iostream>
# include <conio.h>
using namespace std;

int main() {
    char op;
    float num1, num2;

	cout << "Enter any two number: ";
    cin >> num1 >> num2;
    
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "The calculated result is : " << num1 + num2;
            break;

        case '-':
            cout << "The calculated result is : " << num1 - num2;
            break;

        case '*':
            cout << "The calculated result is : " << num1 * num2;
            break;

        case '/':
            cout << "The calculated result is : " << num1 / num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    getch();
}
