#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter First Number: " << endl;
    cin >> num1;
    cout << "Enter Second Number: " << endl;
    cin >> num2;

    char op;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Sum is: " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Subtraction is: " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Multiplication is: " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Division is: " << (num1 / num2) << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        case '%':
            cout << "Remainder is " << (num1 % num2) << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }
    return 0;
}

