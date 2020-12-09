//
//  BubbleSort.cpp
//  copterpix
//
//  Created by Nitai Halle on 26/10/2020.
//

#include "BubbleSort.hpp"

void BubbleSort::sortArray(int arr[], int n)
{
  
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
              if(comparator->compare(arr[j+1],arr[j]))
                  swap(arr[j], arr[j+1]);
    }
}


