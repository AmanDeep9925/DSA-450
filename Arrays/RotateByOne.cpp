#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

void rotateByOne(int arr[],int n){
    int temp = arr[ n - 1];
    int i = 1;

    for (i = n - 1; i > 0;--i){
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;
}

int main () {

    int n;
    cin >> n;

    int arr[n];
    takeInput(arr, n);

    rotateByOne(arr,n);

    printArray(arr, n);
    return 0;
}