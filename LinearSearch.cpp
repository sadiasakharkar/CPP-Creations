#include<iostream>
using namespace std;

int linearsearch(int array[] , int value){
    for (int i = 0; i < 7; i++)
    {
        if (array[i] == value){
            return i;
        }
    }
        return -1;
    

}
 
int main(){
    int n,k=0;

    cout <<"Enter the length of array: ";
    cin >>n;
    int arr[n];

    cout<<"Enter the value for array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Displaying an array you entered: ";
    while(k < n)
    {
        cout<<arr[k]<<" ";
        k=k+1;
    }

    int item  ;
    cout<<"\nEnter the item to search: ";
    cin>>item;

    int index = linearsearch(arr ,item);
    
    if (index != -1)
    {
        cout<<"The element found at index -(index start from 0): "<<index;
    }else
    {
        cout<<"Element not found ";
    }
    
    return 0;
}