#include <iostream>

using namespace std;

int main() {
    double num1, num2, output;
    char op;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter second number: ";  
    cin >> num2;
    
    switch(op) {
        case '+':
            output = num1 + num2;
            break;
        case '-':
            output = num1 - num2;
            break;
        case '*':
            output = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                output = num1 / num2;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    cout << "  Result is " << output << endl;
    
    system("pause");

    return 0;
}
