#include <iostream>
using namespace std;

int main() {
    int rows;

    // cin >> rows;
    // cout << "Enter the number of rows: ";

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
