#include "AlgorithmSortK.h"


AlgorithmSortK::AlgorithmSortK(int k):SelectionAlgorithm(k){
}

int AlgorithmSortK::select(){
    int *arrSortK = 0;
    int size;
    cin >> size;
    arrSortK = new int[this->k];

    for(int i = 0; i < this->k; i++)
        cin >> arrSortK[i];
    
    //Decreasing order Insertion sort
    int i = 0, j = 0, key = 0;
    for (j = 1; j < this->k; j++){
        key = arrSortK[j];
        for (i = j - 1; (i >= 0) && (arrSortK[i] < key); i--){
            arrSortK[i + 1] = arrSortK[i];
        }
        arrSortK[i + 1] = key; 
    }

    int nextElm;
    for(int i = this->k; i < size; i++){
        cin >> nextElm;
        if(nextElm < arrSortK[(this->k - 1)]){
            continue;
        }
        else {
            arrSortK[this->k - 1] = nextElm;
            for(int j = 0; j < this->k -1; j++){
                if(arrSortK[j] < nextElm){
                    int tempData = arrSortK[j];
                    arrSortK[j] = nextElm;
                    arrSortK[this->k - 1] = tempData;
                    nextElm = arrSortK[this->k -1];
                }
            }
        }
    }

    int result = arrSortK[this->k - 1];
    return result;
    delete [] arrSortK;
    arrSortK = 0;
}
