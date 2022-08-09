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
/* We will set the maxNO to lowest possible number of the int,
so when we pass the array and compare
it with the previous number we slowly start to have biggets no in thevariable "maxNo"
For the minimum number we do the opposite */
   int maxNo = INT_MIN; 
   int minNo = INT_MAX;

   for(int i=0; i<arr[n]; i++){
    if(arr[i]>maxNo){
        maxNo= arr[i];
    }
    if(arr[i]<minNo){
        mainNo= arr[i];
    }
   }
   
    return 0; 
 }
