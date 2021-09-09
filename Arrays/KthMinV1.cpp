#include<bits/stdc++.h>
#include"ArrayUtils.h"
#include"MinHeap.h"
using namespace std;

int main () {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    minHeap h;

    for (int i = 0; i < n;++i){
        h.insert(arr[i]);
    }

    for (int i = 1; i < k;++i){
        h.popMin();
    }

    cout << h.getMin() << " ";

    return 0;
}