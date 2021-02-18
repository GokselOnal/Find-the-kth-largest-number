#ifndef _SORTK_
#define _SORTK_
#include <iostream>
#include "SelectionAlgorithm.h"
using namespace std;

class AlgorithmSortK : public SelectionAlgorithm{
public:
    AlgorithmSortK(int);
    int select();
};
#endif