#include<iostream>
using namespace std;
 
int main(){
    string arr[] ={"h" , "e" , "a", "t", "e", "r"} ;
    string pattern[] = {"e" , "a" , ""};
    int k = 1, ls = 6 , lp = 3, max = ls - lp +1 ;

    for ( k = 0; k <= max ; k++)
    {
        bool flag = true;
        for (int l = 0; l <= lp && flag == true; l++)
        {
            if (pattern[l] != arr[k+l-1])
            {
               // k=k+1;
               flag = false;
              
            }
            else{
                cout<<"The pattern start from position: "<<k;
                   return 0;
            }
        }
     
    }
         cout<<"The match don't exist";
    return 0;
}