#ifndef _TEST_
#define _TEST_
#include <iostream>
#include "SelectionAlgorithm.h"
using namespace std;

class TestBed{
    SelectionAlgorithm *algorithm;
public:
    TestBed();
    void execute();
    void setAlgorithm(int,int);
    ~TestBed();
};
#endif