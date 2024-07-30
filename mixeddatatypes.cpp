#include <iostream>
using namespace std;

int main() {
    int Num1 = 5, Num2 = 7;
    double doubleNum1 = 3.7, doubleNum2 = 8.0;

    // Addition
    cout << Num1 << "+" << Num2 << "=" << Num1 + Num2 << endl;
    cout << doubleNum1 << "+" << doubleNum2 << "=" << doubleNum1 + doubleNum2 << endl;
    cout << Num1 << "+" << doubleNum2 << "=" << Num1 + doubleNum2 << endl;

    // Subtraction
    cout << Num1 << "-" << Num2 << "=" << Num1 - Num2 << endl;
    cout << doubleNum1 << "-" << doubleNum2 << "=" << doubleNum1 - doubleNum2 << endl;
    cout << Num1 << "-" << doubleNum2 << "=" << Num1 - doubleNum2 << endl;

    // Multiplication
    cout << Num1 << "*" << Num2 << "=" << Num1 * Num2 << endl;
    cout << doubleNum1 << "*" << doubleNum2 << "=" << doubleNum1 * doubleNum2 << endl;

    return 0;
}
