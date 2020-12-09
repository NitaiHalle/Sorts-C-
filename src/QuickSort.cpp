//
//  QuickSort.cpp
//  copterpix
//
//  Created by Nitai Halle on 26/10/2020.
//

#include "QuickSort.hpp"
//#include <stdlib.h>

void QuickSort::sortArray(int arr[], int n)
{
    quickSort(arr, 0, n-1);
}

int QuickSort::partition(int arr[], int low, int high)
{
    // Select the pivot element
    int pivotIdx =  rand() % (high - low) +low;
    int pivot = arr[pivotIdx];
    swap(arr[high], arr[pivotIdx]);
    int i = (low - 1);

    // Put the elements smaller than pivot on the left
    // and greater than pivot on the right of pivot
    for (int j = low; j < high; j++)
    {
        if (comparator->compare(arr[j], pivot))
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
  
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void QuickSort::quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Select pivot position and put all the elements smaller
        // than pivot on left and greater than pivot on right
        int pivot = partition(arr, low, high);

        // Sort the elements on the left of pivot
        quickSort(arr, low, pivot - 1);

        // Sort the elements on the right of pivot
        quickSort(arr, pivot + 1, high);
    }
}
