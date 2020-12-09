//
//  MergeSort.hpp
//  copterpix
//
//  Created by Nitai Halle on 26/10/2020.
//

#ifndef MergeSort_hpp
#define MergeSort_hpp

#include "Sort.hpp"

/**
 * Merge sort Implementation.
 */
class MergeSort : public Sort
{
    private:
        // A function to split array into two parts.
        void recursiveMergeSort(int a[], int low, int high);
    
        // merges two sorted parts into one sorted
        void merge(int arr[], int low, int high, int mid);
    
    public:
        MergeSort(Comparator* cmp) : Sort(cmp){}
        virtual ~MergeSort(){}
    
        virtual void sortArray(int arr[], int n);
        virtual string getName(){return "merge sort";}
    
};

#endif /* MergeSort_hpp */
