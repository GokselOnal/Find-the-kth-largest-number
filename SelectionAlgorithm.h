#ifndef _SELECTION_
#define _SELECTION_
#include <iostream>
using namespace std;

class SelectionAlgorithm {
protected:    
    int k;
public:
    SelectionAlgorithm(int);
    virtual int select();
};
#endif