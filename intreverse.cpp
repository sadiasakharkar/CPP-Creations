#include<iostream>
using namespace std;

int main(){
    int number,rem,rev=0;

    cout<<"Enter a number: ";
    cin>>number;

    while (number!=0)
    {
        rem=number%10;
        rev=rev*10+rem;
        number/=10;
    }
    cout<<"Reveres number: "<<rev<<endl;

    return 0;
}