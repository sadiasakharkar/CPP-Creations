#include<iostream>
using namespace std;

class sample {
private:
    int l, b;

public:
    void set_values(int length, int breadth) {
        l = length;
        b = breadth;
    }

    friend float new_value(sample a);
};

float new_value(sample a) {
    return float(a.l * a.b);
}

int main() {
    sample x;
    x.set_values(7, 6);
    cout << "Area of the rectangle: " << new_value(x) << endl;

    return 0;
}
