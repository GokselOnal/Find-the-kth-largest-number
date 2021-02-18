#include "BinaryHeap.h"
#include <iostream>
using namespace std;

BinaryHeap::BinaryHeap(int capacity){

    this->capacity = capacity;
    this->heap = new int [capacity + 1];
    this->size = 0;
}

BinaryHeap::~BinaryHeap(){
    delete [] this->heap;
}

void BinaryHeap::insert(int element){
    
    if(size >= capacity){
        cout << "You can not insert, capacity is Full!" << endl;
        return;
    }

    int currentsize = size + 1;
    heap[currentsize] = element;
    percolateUp(size);
    size++;
}

void BinaryHeap::deleteMin(){
    if(size < 1){
        cout << "Heap is Empty" << endl;
        return;
    }
    heap[1] = heap[size];

    percolateDown(1);
    size--;
}

int BinaryHeap::getMin(){
   
    if(size <= 0)
        return -1;
    else    
        return heap[1];
}

void BinaryHeap::percolateDown(int hole){
int child;
    int tmp;
    tmp = heap[hole];

    if(hole * 2 > size){
        return;
    }

    for( ; hole * 2 <= size; hole = child){
        child = hole * 2;
        if(child != size && heap[child +1] < heap[child]){
            child++;
        }

        if(heap[child] < tmp){
            swap(child,hole);
        }
        else{
            break;
        }
    }
}

void BinaryHeap::percolateUp(int hole){
    
    hole++;
    for( ; hole > 1 && heap[hole/2] > heap[hole]; hole /= 2){
        swap(hole, hole/2);
    }
}

void BinaryHeap::swap(int i, int j){
    int temp = heap[i];
    heap[i] = heap[j];
    heap[j] = temp;    
}