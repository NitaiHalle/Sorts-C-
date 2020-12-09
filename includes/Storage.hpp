//
//  Storage.hpp
//  copterpix
//
//  Created by Nitai Halle on 26/10/2020.
//

#ifndef Storage_hpp
#define Storage_hpp

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

/**
 * Reads the file and holds one array of source
 * It is hold another array that can be changed
 * Writes the changes to output file when it's called.
 */
class Storage
{
    private:
        // read the input file
        void readFile(string fileName);
    
        // Copy the source array to the changeable array.
        void copyInputToOutput();
    
        int size;
        vector<int> input;
        int* output;

    public:
        Storage(string fileName);
        ~Storage();

        //He writes the output array into a file
        void writeOutputFile(string fileName);
    
        // Returns the source it can be worked on
        int* getOriginal();
    
        // get size of input
        int getSize(){return size;};
};
#endif /* Storage_hpp */
