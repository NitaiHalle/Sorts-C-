//
//  Comparator.hpp
//  Sort Compare
//
//  Created by Nitai Halle on 28/10/2020.
//

#ifndef Comparator_hpp
#define Comparator_hpp

#include <stdio.h>
/**
 * Designed to make some comparison between two integers.
 */
class Comparator
{
    public:
        Comparator(){}
        virtual ~Comparator(){}
    
        // comparison between two integers.
        virtual bool compare(int& num1, int& num2) = 0;
};

#endif /* Comparator_hpp */

