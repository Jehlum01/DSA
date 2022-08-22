/******************************************************************************

                             Smallest Positive Missing Number in an array
Problem: Given arr[] of N integer including 0? Find the smallest +ve nmber missing from the array?

constraints : 1<=N<=10^6
                10^6 <=Ai <= 10^6
*******************************************************************************/

#include <iostream>
#include<climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n]; int sum; int maxSum=INT_MIN;
    
    for (int i = 0; i < n; i++) {
        cin>>a[i];                //input for the arrays
    }
    
    for (int i = 0; i < n; i++) {
        for (int j=i; j < n; j++) {
            for (int k = i; k <j; k++) {
               sum+=a[k];
            } 
            /* */
        }maxSum =max(maxSum,sum);
    }
    cout<<maxSum<<endl;
    return 0;
}
