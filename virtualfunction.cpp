#include<iostream>
using namespace std;

class baseclass{
    public:
    int var_base;
    virtual void display(){
        cout<<"It's Displaying base class variable var_base "<<var_base<<endl;
    }
};

class derivedclass: public baseclass{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying base class variable var_base "<<var_base<<endl;
        cout<<"Displaying derieved class variable var_derived "<<var_derived<<endl;
    }
};
 
int main(){
    baseclass* base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;

    base_class_pointer  =  &obj_derived;
    base_class_pointer->display();
    return 0;
}