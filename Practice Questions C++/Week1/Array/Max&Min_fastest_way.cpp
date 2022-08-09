 #include<iostream>
 #include<math.h>
 #include<climits.h>
 using namespace std;

 int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   int maxNo = INT_MIN; 
   int minNo = INT_MAX;

/*To make the process faster we will now use the in built function of the inlcuded library "climits"
Which is max() and min() it takes two parameters both as numbers and returns the value as max and min
which we are storing in the variable maxNO and minNo*/
   for(int i=0; i<arr[n]; i++){
    maxNo=max(maxNo, arr[i]);
    minNo=min(minNo, arr[i]); 
        }  
    return 0; 
 }
