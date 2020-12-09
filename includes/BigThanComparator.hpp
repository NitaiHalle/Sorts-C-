//
//  BigThanComparator.hpp
//  Sort Compare
//
//  Created by Nitai Halle on 28/10/2020.
//

#ifndef BigThanComparator_hpp
#define BigThanComparator_hpp

#include <stdio.h>
#include "Comparator.hpp"

/**
 * Performs a comparison of greater than.
 */
class BigThanComparator : public Comparator
{
    public:
        bool compare(int& num1, int& num2);
};

#endif /* BigThanComparator_hpp */
