/******************************************************************************

                             Smallest Positive Missing Number in an array
Problem: Given arr[] of N integer including 0? Find the smallest +ve nmber missing from the array?

constraints : 1<=N<=10^6
                10^6 <=Ai <= 10^6
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin>>a[i];                //input for the arrays
    }
    
    const int N =1e6 + 2; //initalze the array size of 10^1e6
    bool check[N];          // the bool array will be used to compare the values it the ablove array and make changes in addrss as true or flase
    for(int i=0; i<N;i++){
        check[i]=false;  //setting all the elements as false.
    }
    for (int i = 0; i < N; i++) {
       if(a[i]>=0){
           check[a[i]]=1;
       }
    }
    int ans=-1;
    for (int i = 0; i < N; i++) {
    if(check[i]==false){
        ans=i;
        break;
    }
    }
     cout<<ans<<endl;
    

    return 0; 
}
