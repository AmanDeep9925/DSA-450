#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

int minimum(int arr[],int n){
    int curMin = INT_MAX;

    for (int i = 0; i < n;++i){
        if(arr[i] < curMin){
            curMin = arr[i];
        }
    }

    return curMin;
}

int main () {

    int n;
    cin >> n;

    int arr[n];

    takeInput(arr, n);

    int min = minimum(arr, n);

    cout << min;
    return 0;
}