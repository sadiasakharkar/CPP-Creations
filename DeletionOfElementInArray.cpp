#include<iostream>
using namespace std;
 
int main(){
    
    int n,k,item;
    cout<<"Enter the length of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter values for the array: ";
    for( int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }

    cout<<"The entered array is : ";
    for (k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    cout << "Enter the index of the element to delete (0-based index): ";
    cin >> k;


    item = arr[k];
    for(int j=k; j < n-1; j++){
        arr[j] = arr[j-1];
    }

    n = n-1;

    cout<<"Displaying an array after deletion: ";
    for ( int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}