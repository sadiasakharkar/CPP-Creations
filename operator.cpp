#include<iostream>

using namespace std;

int main(){
    int a=2,b=3;

    cout<<(a + a++ + a)<<endl;
    cout<<(a++ + a + a++ + a)<<endl;
    cout<<(a++ + b++ + a + b++)<<endl;
    cout<<(a++ + ++a)<<endl;
    cout<<(++a + b++ + a++ + ++a + a + ++b)<<endl;
    return 0;
}
