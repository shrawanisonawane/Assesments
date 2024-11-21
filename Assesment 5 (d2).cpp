#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter an operator (+, -, *, /, %): " << endl;
    cin >> operation;
    cout << "Enter second number: " << endl;
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        case '%':
            // Ensure both numbers are integers for modulus operation
            if (static_cast<int>(num2) != 0) {
                cout << "Result: " <<static_cast<int>(num1) % static_cast<int>(num2) << endl;
            } else {
                cout << "Error: Division by zero in modulus operation!" << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}


