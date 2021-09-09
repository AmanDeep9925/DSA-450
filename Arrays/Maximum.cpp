#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

int maximum(int arr[],int n){
    int curMax = INT_MIN;

    for (int i = 0; i < n;++i){
        if(arr[i] > curMax){
            curMax = arr[i];
        }
    }

    return curMax;
}

int main () {

    int n;
    cin >> n;

    int arr[n];

    takeInput(arr, n);

    int max = maximum(arr, n);

    cout << max;

    return 0;
}