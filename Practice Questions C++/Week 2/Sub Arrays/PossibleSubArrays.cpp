// Looping through and printing the values of the subarrays
#include <iostream>
using namespace std;

int main() {
    int i;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j;k++){
                cout<<arr[k]<<" "<<endl;
            }
        }
    }

    return 0;
}
