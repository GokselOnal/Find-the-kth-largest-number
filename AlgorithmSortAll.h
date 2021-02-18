#ifndef _SORTALL_
#define _SORTALL_
#include <iostream>
#include "SelectionAlgorithm.h"
using namespace std;

class AlgorithmSortAll : public SelectionAlgorithm{
public:
    AlgorithmSortAll(int);
    int select();
};
#endif