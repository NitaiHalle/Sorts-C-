//
//  Storage.cpp
//  copterpix
//
//  Created by Nitai Halle on 26/10/2020.
//

#include "Storage.hpp"

#include <fstream>
#include <string>

#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
//
//Storage::Storage(){
//    Storage::input = readFile((char*)"input.txt");//check about conversion
//
//}
//
//int* Storage::readFile(char* fileName){
////    std::ifstream file(fileName);
////    std::string str;
//    int* i = 0;
//
//std::ifstream infile(fileName);
//std::string line;
//while (std::getline(infile, line))
//    {
//        std::istringstream iss(line);
//        std::cout << line << std::endl;
//
////        int a, b;
////        if (!(iss >> a >> b)) { break; } // error
//
//
//    }
//    return i;
//}


#include <fstream>
#include <string>

#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <exception>
using namespace std;
Storage::Storage(string fileName)
{
    readFile(fileName);
    size = int(input.size());
    output = new int[size];
}

void Storage::readFile(string fileName)
{
    ifstream inFile;
    string line;
    inFile.open(fileName);
        
    if(!inFile.is_open())
    {
        perror("Error open");
        exit(EXIT_FAILURE);
    }
        
    while (getline(inFile, line))
    {
        input.push_back(stoi(line));
    }
    
    inFile.close();
}

void Storage::writeOutputFile(string fileName)
{
    ofstream outFile;
    outFile.open (fileName);
    
    if(!outFile.is_open())
    {
        perror("Error open");
        exit(EXIT_FAILURE);
    }
    
    for(int i = 0; i < size; i++ )
    {
        outFile << output[i] << endl;
    }
    outFile.close();
    
}
void Storage::copyInputToOutput()
{
    for (int i = 0; i < size;i++)
    {
        output[i] = input[i];
    }
}

int* Storage::getOriginal()
{
    copyInputToOutput();
    return output;
}

Storage::~Storage()
{
    delete [] output;
    
}
