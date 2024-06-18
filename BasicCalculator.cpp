#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        bool continueCalculate = true;
        int num1, num2;
        char operation;

        while (continueCalculate) {
            cout << "Enter  1st number: ";
            cin >> num1; 
            cout << "Enter  2nd number: ";
            cin >> num2;
            cout << "Choose an operation (+, -, *, /) or Q to quit: ";
            cin >> operation;

            switch (operation) {
                case '+':
                    cout << "Sum = " << num1 + num2 << endl;
                    break;
                case '-':
                    cout << "Difference = " << num1 - num2 << endl;
                    break;
                case '*':
                    cout << "Product = " << num1 * num2 << endl;
                    break;
                case '/':
                    if (num2 != 0) {
                        cout << "Quotient = " << (num1 / num2) << endl;
                    } else {
                        cout << "Dividing by 0 is not allowed!" << endl;
                    }
                    break;
                case 'Q':
                case 'q':
                    cout << "System closing!" << endl;
                    continueCalculate = false;
                    break;
                default:
                    cout << "Invalid operation!" << endl;
                    break;
            }
        }
    } catch (const runtime_error &e) {
        cout << "OOPS! " << e.what() << endl;
    }

    return 0;
}