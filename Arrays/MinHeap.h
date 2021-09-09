#include<bits/stdc++.h>
using namespace std;

class minHeap{

    vector<int> heap;

public:
    void insert(int val){
        heap.push_back(val);

        int child = heap.size() - 1;
        int parent = (child - 1) / 2;

        while(child > 0){
            if(heap[child] < heap[parent]){
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

    int getMin(){
        if(isEmpty()){
            return INT_MAX;
        }

        return heap[0];
    }

    void heapify(int idx){
        int parent = idx;
        int left = parent * 2 + 1;
        int right = parent * 2 + 2;

        while(left < heap.size()){
            int minIdx = parent;

            if(heap[left] < heap[minIdx]){
                minIdx = left;
            }

            if(right < heap.size() && heap[right] < heap[minIdx]){
                minIdx = right;
            }

            if(minIdx == parent){
                break;
            }

            int temp = heap[minIdx];
            heap[minIdx] = heap[parent];
            heap[parent] = temp;

            parent = minIdx;
            left = parent * 2 + 1;
            right = parent * 2 + 2;
        }
    }

    int popMin(){
        if(isEmpty()){
            return INT_MAX;
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