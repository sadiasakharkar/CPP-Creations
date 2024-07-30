/*This C++ program reads an integer from the user and counts the number of digits in that integer. It does this by repeatedly dividing the number by 10 until the quotient is 0, incrementing a counter each time. The final count is then printed to the console.*/

#include<iostream>
using namespace std;

main() {
    int num,digits_count=1;
    cin>>num;
    int temp=num;
    //Divide the number by 10, until we get quotient as 0
    while(temp/=10)
        //Increase the digit count by 1
        digits_count++;

    cout<<"The number "<<num<<" has "<<digits_count<<" digit(s)"<<endl;
}
