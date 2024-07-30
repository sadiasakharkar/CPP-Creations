#include <iostream>
using namespace std;

int main() {
    int asciiValue;

    cout << "Enter an ASCII value (0-127): ";
    cin >> asciiValue;

    if (asciiValue >= 65 && asciiValue <= 90) {
        cout << "The character is an uppercase letter: " << char(asciiValue) << endl;
    } else if (asciiValue >= 97 && asciiValue <= 122) {
        cout << "The character is a lowercase letter: " << char(asciiValue) << endl;
    } else {
        cout << "The ASCII value does not represent a letter." << endl;
    }

    return 0;
}

