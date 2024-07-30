#include<iostream>
using namespace std;
 
int main(){
    int n,j,k=0;
    

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

    cout<<"\nINSERTING A ELEMNT IN ARRAY";

    int item;

    cout<<"\nEnter the element which has to be placed: ";
    cin>>item;
    cout<<"\nAt what position the element has to be placed: ";
    cin>>k;

    j=n;

    while (j>=k)
    {
        arr[j] = arr[j-1];
        j= j-1;
    }
    arr[k-1] = item;
    n = n+1;
    
    cout<<"Displaying an array after insertion: ";
    for ( int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    

    return 0;
}