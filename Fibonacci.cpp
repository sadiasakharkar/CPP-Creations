#include <iostream>
using namespace std;

int main() {
    int n; // Number of terms in the Fibonacci series
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> n;

    int first = 0, second = 1;
    int next;

    cout << "Fibonacci Series for " << n << " terms: ";

    if (n >= 1) {
    cout << first << " ";
    }
    if (n >= 2) {
        cout << second << " ";
    }

    for (int i = 3; i <= n; i++) {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
