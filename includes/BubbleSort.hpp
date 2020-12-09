//
//  BubbleSort.hpp
//  copterpix
//
//  Created by Nitai Halle on 26/10/2020.
//

#ifndef BubbleSort_hpp
#define BubbleSort_hpp

#include "Sort.hpp"
#include "Comparator.hpp"

/**
 * Bubble sort Implementation.
 */
class BubbleSort : public Sort
{
    public:
        BubbleSort(Comparator *cmp) : Sort(cmp){}
        virtual ~BubbleSort(){}
    
        virtual void sortArray(int arr[], int n);
        virtual string getName(){return "bubble sort";}
};

#endif /* BubbleSort_hpp */

