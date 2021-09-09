#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

int findKthMaximum(int arr[],int n,int k){
    sort(arr, arr + n,greater<int>());

    return arr[k - 1];
}

int main () {

    int n;
    cin >> n;

    int arr[n];

    takeInput(arr, n);

    int k;
    cin >> k;

    int kthMin = findKthMaximum(arr, n,k);

    cout << kthMin;
    return 0;
}