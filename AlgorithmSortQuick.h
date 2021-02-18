#ifndef _SORTQUICK_
#define _SORTQUICK_
#include <iostream>
#include "SelectionAlgorithm.h"
using namespace std;

class AlgorithmSortQuick: public SelectionAlgorithm{
public:    
    AlgorithmSortQuick(int);
    int select();
    int quickselect(int*,int,int,int );
};
#endif