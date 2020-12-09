//
//  MergeSort.cpp
//  copterpix
//
//  Created by Nitai Halle on 26/10/2020.
//

#include "MergeSort.hpp"


void MergeSort::sortArray(int arr[], int n)
{
    recursiveMergeSort(arr, 0, n-1);
}


void MergeSort::recursiveMergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        // Split the data into two half.
        recursiveMergeSort(arr, low, mid);
        recursiveMergeSort(arr, mid+1, high);
 
        // Merge them to get sorted output.
        merge(arr, low, high, mid);
    }
}
 
void MergeSort::merge(int arr[], int low, int high, int mid)
{
    // We have low to mid and mid+1 to high already sorted.
    int i, j, k;
    int* temp = new int[high-low+1];
    i = low;
    k = 0;
    j = mid + 1;
 
    // Merge the two parts into temp[].
    while (i <= mid && j <= high)
    {
        //if (arr[i] < arr[j])
        if (comparator->compare(arr[j],arr[i]))
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
        else
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
    }
    
    // Insert all the remaining values from i to mid into temp[].
    while (i <= mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    
    // Insert all the remaining values from j to high into temp[].
    while (j <= high)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }
    
    // Assign sorted data stored in temp[] to a[].
    for (i = low; i <= high; i++)
    {
        arr[i] = temp[i-low];
    }
    
    delete [] temp;
}
