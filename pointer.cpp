#include<iostream>
using namespace std;

/*int swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;

    cout<<"the value after swaping is:"<<a<<", "<<b<<endl;
    return 0;
}

int pswap(int* a, int *b){
    int temp=*a;
    *a=*b;;
    *b=temp;

    cout<<"the changed value using pointer is :"<<*a<<", "<<*b;
    return 0;
}

int main(){
    int a,b;
    cout<<"Enter the value for a and b:";
    cin>>a>>b;
    swap(a,b);
    pswap(&a,&b);

    return 0;

    }*/

int main() {
    int a = 7;
    int &at = a;   // Declare a reference 'at' to 'a'
    int *ptr_a = &a;  // Declare a pointer 'ptr_a' and assign the address of 'a' to it

    cout << "the value at a is: " << a << endl;
    cout << "the value at at is: " << at << endl;
    cout << "the address at a is: " << &a << endl;
    cout << "the value pointed to by ptr_a is: " << *ptr_a << endl;
    cout << "the address pointed to by ptr_a is: " << ptr_a << endl;

    return 0;
}
