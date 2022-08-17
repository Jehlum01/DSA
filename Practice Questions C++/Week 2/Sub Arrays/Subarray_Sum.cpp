/******************************************************************************
        Sum  of all sub array

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int sum;
   int n;
   cin>>n;
   
   int a[n];
   
   for (int i = 0; i < n; i++) {
       cin>>a[i]; //taking the inputs in the arrays
   }
   
   int curr =0; // Current will store the value of the addtion
   
   for(int i =0; i<n; i++){
       curr= 0; 
       for(int j=i; j<n; j++){
           
        curr+=a[j]; //adding the values of the arrays
        cout<<curr<<endl;
       
       }
   }
   return 0;
   
}
