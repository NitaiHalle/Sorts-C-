//
//  QuickSort.hpp
//  copterpix
//
//  Created by Nitai Halle on 26/10/2020.
//

#ifndef QuickSort_hpp
#define QuickSort_hpp

#include "Sort.hpp"

/**
 * Quick sort Implementation.
 */
class QuickSort : public Sort
{
    private:
        // Function to partition the array on the basis of pivot element
        int partition(int arr[], int low, int high);
        //recursive quick sort implementation.
        void quickSort(int arr[], int low, int high);
    
    public:
        QuickSort(Comparator *cmp) : Sort(cmp){}
        virtual ~QuickSort(){}
    
        virtual void sortArray(int arr[], int n);
        virtual string getName(){return "quick sort";}
    
};

#endif /* QuickSort_hpp */
