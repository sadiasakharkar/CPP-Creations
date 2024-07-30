#include<iostream>
using namespace std;
 
int main(){
    
    int k = 1, loc = 1, n = 5 ;
    int data[5] = { 0, 5, 2, 2, 8};
    int max = data[1];

    for ( k = 0; k < n; k++)            
    {
        if (max < data[k])
        {
            loc = k+1;
            max = data[k];
        }   
    }
         cout<<"Loc: "<<loc <<" max: "<< max <<endl;

    return 0;
}