# include <iostream>
# include <conio.h>
using namespace std;

int main() {
    int num1, num2;
    char os;

	cout << "Enter any two number: ";
    cin >> num1; 
    cin >> num2;
    
    cout << "Enter the operator (+, -, *, /): ";
    cin >> os;

    switch(os) {
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

    }
    getch();
}