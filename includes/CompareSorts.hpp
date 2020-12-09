//
//  CompareSorts.hpp
//  copterpix
//
//  Created by Nitai Halle on 26/10/2020.
//

#ifndef CompareSorts_hpp
#define CompareSorts_hpp

//#include <stdio.h>
#include <string>

#include "Sort.hpp"
#include "Storage.hpp"
#include "Comparator.hpp"

using namespace std;

/**
 * Holds a list of sorting algorithms and a file that needs sorting.
 * It executes the various algorithms and measures their time.
 */
class CompareSorts
{
    private:
        Storage *data;
        Comparator *cmp;
        string inputFile;
        vector<Sort*> sortsList;
    public:
        CompareSorts(string inputFile);
        ~CompareSorts();
    
        //executes the algorithms and measures their time.
        void process();
};
#endif /* CompareSorts_hpp */
