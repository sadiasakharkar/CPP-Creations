#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    int cols = 4;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "* ";
        }
        cout << std::endl;
    }

    return 0;
}
