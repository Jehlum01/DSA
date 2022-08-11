/******************************************************************************

                     Sorying in  Arrays
            1. Selection Sort: Find the min. element in the unsorted Arrays
             and swap it with the element at the begining.
*******************************************************************************/

#include <iostream>
using namespace std;

int
main ()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
     } 
  
  for (int i = 0; i < n - 1; i++){
// we will create loop 1 to iterate & compare fist value
// array to the rest of the array
      for (int j = i + 1; j < n; j++){			
                                // Now for next loop we will start from i+1 index as first
                                // index is used in the l1 to compare 
	  if (arr[j] < arr[i]){		//now comparing the values of i to j
	      int temp = arr[j];	// storing the value of min. no. in temp var
	      arr[j] = arr[i];	    // swaping the value j to i
	      arr[i] = temp;	    // assiging the value of temp
	    }
	}

    }
  for (int i = 0; i < n; i++)
    {
      cout << arr[i];
      cout << " " << endl;
    }
  return 0;
}
