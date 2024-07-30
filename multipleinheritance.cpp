#include<iostream>
using namespace std;

class base1{
    protected:
    int base1int;

    public:
    void set_base1int(int a){
        base1int = a;
    }
};

class base2{
    protected:
    int base2int;

    public:
    void set_base2int(int a){
        base2int = a;
    }
};

class derived: public base1, public base2 {
    public:
    void show(){
        cout<<"The value of base1 is: "<<base1int<<endl;
        cout<<"The value of base2 is: "<<base2int<<endl;
        cout<<"The sum of the values are: "<<(base1int +base2int)<<endl;
    }
};

int main(){
    derived obj;
    obj.set_base1int(20);
    obj.set_base2int(40);
    obj.show();

    return 0;
}