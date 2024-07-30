#include<iostream>
using namespace std;

class complex{
    private:
    int real,imag;
    public:
    complex(){
        real=0;
        imag=0;
    }

    complex(int r, int i){
        real=r;
        imag=i;
    }

    void print(){
        cout<<real<<" + "<<imag <<"i"<<endl;
    }

    complex operator +(complex c){ //operator overloading 
        complex temp;
        temp.real=real + c.real;
        temp.imag= imag + c.imag;
        return temp;
    }

};

int main(){
    complex c1(5,4);
    complex c2(2,5);
    complex c3(1,1);
    complex c4;

    c4= c1+c2 + c3 ; //c3= c1.add (c2); (this is how the compiler sees it)

    c4.print();

    return 0;
}