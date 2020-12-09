//
//  main.cpp
//  Sort Compare
//
//  Created by Nitai Halle on 26/10/2020.
//
#include <string>
#include <iostream>

#include "CompareSorts.hpp"

/**
 * parse arguments from user
 *
 * @param argc is argument count
 * @param argv contain argument vector
 * @return input file name
 */
string parse(int argc, const char * argv[]){
    
    std::string inputFile;
    if(argc == 2){
        inputFile = argv[1];
    }
    else {
        inputFile = "input.txt";
    }
    return inputFile;
}


int main(int argc, const char * argv[]) {
    
    std::string inputFile = parse(argc,argv);
    
    CompareSorts test = CompareSorts(inputFile);
    test.process();
    return 0;
}

