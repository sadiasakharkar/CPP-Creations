#include<iostream>
using namespace std;
int main(){
    int a=5,b=7;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"changed value of a and b is:"<<a<<","<<b;
    return 0;
}
