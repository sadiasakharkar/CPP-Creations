#include <iostream>

using namespace std;

int main() {
    cout << "Prime numbers from 1 to 100:" << endl;

    for (int i = 2; i <= 100; i++) {
        bool isPrime = true;

         // Check if 'num' is divisible by any number from 2 to the square root of 'num'
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " "<<endl;
        }
    }

    cout << endl;

    return 0;
}
