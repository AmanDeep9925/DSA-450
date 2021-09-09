#include<bits/stdc++.h>
using namespace std;

class maxHeap{

    vector<int> heap;

public:
    void insert(int val){
        heap.push_back(val);

        int child = heap.size() - 1;
        int parent = (child - 1) / 2;

        while(child > 0){
            if(heap[child] > heap[parent]){
                int temp = heap[child];
                heap[child] = heap[parent];
                heap[parent] = temp;

                child = parent;
                parent = (child - 1) / 2;
            }else{
                return;
            }
        }
    }

    int getMax(){
        if(isEmpty()){
            return INT_MIN;
        }

        return heap[0];
    }

    void heapify(int idx){
        int parent = idx;
        int left = parent * 2 + 1;
        int right = parent * 2 + 2;

        while(left < heap.size()){
            int maxIdx = parent;

            if(heap[left] > heap[maxIdx]){
                maxIdx = left;
            }

            if(right < heap.size() && heap[right] > heap[maxIdx]){
                maxIdx = right;
            }

            if(maxIdx == parent){
                break;
            }

            int temp = heap[maxIdx];
            heap[maxIdx] = heap[parent];
            heap[parent] = temp;

            parent = maxIdx;
            left = parent * 2 + 1;
            right = parent * 2 + 2;
        }
    }

    int popMax(){
        if(isEmpty()){
            return INT_MIN;
        }

        int ans = heap[0];

        heap[0] = heap[heap.size() - 1];
        heap.erase(heap.begin() + heap.size() - 1);

        heapify(0);
        return ans;
    }

    int size(){
        return heap.size();
    }

    bool isEmpty(){
        return heap.size() == 0 ? true : false;
    }
};