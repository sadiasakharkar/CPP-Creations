#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;

    public:
    void set_data(void){
        cout<<"Enter the id:";
        cin>>id;
        count++;
    }
    void get_data(void){
        cout<<"Id: "<<id << " and Employee number: "<<count<<endl;
    }
};
 
int employee :: count;

int main(){
    employee a,b,c;
    a.set_data();
    a.get_data();

    b.set_data();
    b.get_data();

    c.set_data();
    c.get_data();
    return 0;
}