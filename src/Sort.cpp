//
//  Sort.cpp
//  copterpix
//
//  Created by Nitai Halle on 26/10/2020.
//

#include "Sort.hpp"
#include <chrono>
using namespace std::chrono;
using namespace std;


void Sort::swap(int& num1, int& num2)
{
  int temp = num1;
  num1 = num2;
  num2 = temp;
}

void Sort::run(int arr[], int n)
{
    auto start = system_clock::now();
    this->sortArray(arr,  n);
    auto stop = system_clock::now();
    auto duration = std::chrono::duration<double,milli>(stop - start);

    time = duration.count();
}
