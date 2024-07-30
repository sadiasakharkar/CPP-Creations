#include<iostream>
#include<string>
using namespace std;
 
int main(){
    string t[] = {"a","a", "a", "a" , "b", "a"};
    string p[] = {"a" , "a", "b", "a"};
    
    int k =1;
    int index =0;
    int n = p->length();
    string s = p[0];

    while (k <= sizeof(t) -  n +1){
        bool match =true;
        int j;
        k++;

        for ( j = 0; j < n; j++)
        {
            if (t[k+j-1] != p[j])
            {
                match = false;
                break;

            }
            
        }
        if(match){
            index =k ;
            break;
        }
        
        k = k+1;
        s = t[k-1];
    }

    if(index !=0)
        cout<<"Pattern found starting at index:"<<index;
    else
        cout<<"Pattern not found";
    return 0;
}