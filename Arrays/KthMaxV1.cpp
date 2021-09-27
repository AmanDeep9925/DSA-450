#include<bits/stdc++.h>
#include"ArrayUtils.h"
#include"MaxHeap.h"
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

    maxHeap h;

    for (int i = 0; i < n;++i){
        h.insert(arr[i]);
    }

    while(k--){
        h.popMax();
    }

    cout << h.getMax() << " ";

    return 0;
}