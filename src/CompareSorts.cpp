//
//  CompareSorts.cpp
//  copterpix
//
//  Created by Nitai Halle on 26/10/2020.
//

#include "CompareSorts.hpp"
#include "Storage.hpp"

#include "BubbleSort.hpp"
#include "MergeSort.hpp"
#include "QuickSort.hpp"
#include <iostream>
#include <string>
#include "BigThanComparator.hpp"
using namespace std;

CompareSorts::CompareSorts(string fileName)
{
    data = new Storage(fileName);
    
    cmp = new BigThanComparator();
    
    MergeSort* mergeSort = new MergeSort(cmp);
    QuickSort* quickSort = new QuickSort(cmp);
    BubbleSort* bubbleSort = new BubbleSort(cmp);
    
    sortsList.push_back(mergeSort);
    sortsList.push_back(quickSort);
    sortsList.push_back(bubbleSort);
}

void CompareSorts::process()
{
    for(int i = 0; i < sortsList.size(); i++)
    {
        sortsList[i]->run(data->getOriginal(), data->getSize());
        cout << "Time taken by "<< sortsList[i]->getName() << ": " <<sortsList[i]->getRunTime()
        << " milliseconds" << std::endl;
        data->writeOutputFile(sortsList[i]->getName()+".txt");
    }
}

CompareSorts::~CompareSorts()
{
    delete data;
    delete cmp;
    
    for(int i = 0; i < sortsList.size(); i++){
        delete sortsList[i];
    }
}
