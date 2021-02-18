#include "TestBed.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"
#include "AlgorithmSortHeap.h"
#include "AlgorithmSortQuick.h"
#include <ctime>

TestBed::TestBed(){
    
}

void TestBed::setAlgorithm(int type, int k){
    if(type == 1){
        this->algorithm = new AlgorithmSortAll(k);
    }
    else if(type == 2){
        this->algorithm = new AlgorithmSortK(k);
    }
    else if(type == 3){
        this->algorithm = new AlgorithmSortHeap(k);
    }
    else if(type == 4){
        this->algorithm = new AlgorithmSortQuick(k);
    }
}

void TestBed::execute(){

    int result = 0;
    clock_t start = clock();
    result = this->algorithm->select();
    clock_t end = clock();
    double cpu_time = static_cast<double>( end - start ) /CLOCKS_PER_SEC;

    cout << "Result: " << result << endl;
    cout << "Duration(sec): " << cpu_time << endl;
}

TestBed::~TestBed(){
    delete this->algorithm;
}