#include<iostream>
using namespace std;
 
int main(){
    
    int k=0,n;
    //int ub = n-1;

    cout <<"Enter the length of array: ";
    cin >>n;
    int arr[n];

    cout<<"Enter the value for array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Displaying an array you entered: ";
    while (k<n)
    {
        cout<<arr[k]<<" ";
        k=k+1;
    }
    


   return 0;
}