//
//  Sort.hpp
//  copterpix
//
//  Created by Nitai Halle on 26/10/2020.
//

#ifndef Sort_hpp
#define Sort_hpp

#include <stdio.h>
#include <iostream>
#include "Comparator.hpp"

using namespace std;

/**
 * It is abstract class that sort algorithms inheriting from
 */
class Sort
{
    private:
        double time = -1;
        string sortName;

    protected:
    
        // Switches between two integers
        void swap(int& num1, int& num2);
        Comparator* comparator;
    
        // sort the array
        virtual void sortArray(int arr[], int n) = 0;
    
    public:
        Sort(Comparator *cmp) : comparator(cmp){}
        virtual ~Sort(){}
    
        // sort the array and measures time
        void run(int arr[],int n);
    
        // returns sort time
        double getRunTime(){return time;}
    
        // returns name sort
        virtual string getName()=0;
};

#endif /* Sort_hpp */
