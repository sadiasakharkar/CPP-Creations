#include<iostream>
using namespace std;

void sort(int arr[], int n){
    for (int i = 0; i < n - 1 ; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j+1] = temp ;
            }
        }
    }
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
    
    sort(arr,n);

    cout<<"\nSorted array \n";

    for( int i= 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }

    int data[n];
    for (int i = 0; i < n  ; i++)
    {
        data[i] = arr[i];
    }  

//     int item , loc ;
//     cout<<"\nEnter the item to search: ";
//     cin>>item;

//     int beg = 0;
//     int end = n-1;
//     int mid;

//     while(beg <= end){
//         mid = (beg + end ) / 2;
//         if(data[mid] < item){
//             beg = mid +1;
//         }else{
//             end = mid -1;
//         }
//     }

// if(arr[mid] == item){
//     loc = mid;
//     cout<<"Item Found At Index: "<<loc;
//     return 0;
// }else{
//     loc = -1;
// }
//     cout<<"Item Not Found ";

    return 0;
}