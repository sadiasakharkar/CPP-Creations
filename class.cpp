#include<iostream>
using namespace std;

// class myclass{
//     public:
//     int mynum;
//     string mystring;
// };

// int main(){
//     myclass myobj;

//     myobj.mynum=15;
//     myobj.mystring="Sadia";
//     cout<<myobj.mynum<<endl;
//     cout<<myobj.mystring;
//     return 0;
// }

class mobile{
    public:
    string colour;
    string model;
    string op;
};

int main(){
    mobile mymob;
    mymob.colour="Black";
    mymob.model="Apple";
    mymob.op="ios";

    mobile yourmob;
    yourmob.colour="Ferozi";
    yourmob.model="Redminote";
    yourmob.op="Andriod";

    mobile noufsmob;
    noufsmob.colour="Blue";
    noufsmob.model="Sumsung";
    noufsmob.op="Andriod";

    cout<<mymob.colour<<"   "<<mymob.model<<"   "<<mymob.op<<endl;
    cout<<yourmob.colour<<"   "<< yourmob.model<<"   "<<yourmob.op<<endl;
    cout<<noufsmob.colour<<"   "<<noufsmob.model<<"   "<<noufsmob.op<<endl;

    return 0;
}