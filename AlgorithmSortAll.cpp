#include "AlgorithmSortAll.h"


AlgorithmSortAll::AlgorithmSortAll(int k) : SelectionAlgorithm(k){
    
}

int AlgorithmSortAll::select(){

    int *arrSortAll = 0;
    int size;
    cin >> size;
    arrSortAll = new int[size];

    for (int i = 0; i < size; i++)
         cin >>  arrSortAll[i];
    

    //Decreasing order Insertion sort
    int i = 0, j = 0, key = 0;
    for (j = 1; j < size; j++){
        key = arrSortAll[j];
        for (i = j - 1; (i >= 0) && (arrSortAll[i] < key); i--){
            arrSortAll[i + 1] = arrSortAll[i];
        }
        arrSortAll[i + 1] = key; 
    }

    int result =  arrSortAll[this->k -1];
    return result;
    delete [] arrSortAll;
    arrSortAll = 0;
}
