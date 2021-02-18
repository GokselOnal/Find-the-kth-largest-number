#ifndef _SORTHEAP_
#define _SORTHEAP_
#include <iostream>
#include "SelectionAlgorithm.h"
using namespace std;

class AlgorithmSortHeap: public SelectionAlgorithm{

public:
    AlgorithmSortHeap(int);
    int select();
};
#endif