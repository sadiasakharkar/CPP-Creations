#include<iostream>
using namespace std;

class complex{
    int a,b;

     public:
     complex( int ,int );

     void print(){
        cout<<"Your number is "<<a << " + "<<b<< "i"<< endl;
     }

};

complex :: complex (int x, int y){
    a=x;
    b=y;
}
 
int main(){

    complex a(4,5);
    a.print();

    return 0;
}