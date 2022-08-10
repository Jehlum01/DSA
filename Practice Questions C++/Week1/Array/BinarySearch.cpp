/******************************************************************************

                  Binary Search in Array
     we use binary search to reduce the time  complexity of the 
         linear seach(which is n);
1. To do the binary search and we neeed to arrange the data ina 
    ass/descend order, then we will proced by jumping in between and
    compare it with other untill we find the number
    
   2. The time complexity of the binary search :
      After first iteraation, length of the array = n
      After secnd iteration , length of the array = n/2
      ------
      After Kth iteration, the length of array = n/k
      
      So the time complexity, becomes O(logn)2
*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binarySearch(int arry[], int n, int key){
     int sp=0; // starting point of search
     int ep=n;  // ending point of search
   
     while(sp<=ep){ //search untill the value of sp is less than ep
        int mid = (sp+ep)/2;
        
        if(arry[mid]==key){ //jump to the mid, if the key is present then we will return the value of mid, otherwise (else if runs)
            return mid;
        }
         else if(arry[mid]>key){//the  key seems to be smaller 
             ep=mid-1; //updating the value of the ep with resp. to mid point
         }
         else{
             sp=mid+1;
         }
     }
     return -1;
}
int main ()
{
  int n;
  cin >> n;
  int arry[n];
  for (int i = 0; i < n; i++)
    {
      cin >> arry[i];
    }

  int key;
  cin >> key;

  cout << binarySearch (arry, n, key) << endl;


  return 0;
}
