#include<bits/stdc++.h>
#include "ArrayUtils.h"

using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void reverse(int arr[],int n){

    for (int i = 0; i < n / 2;++i){
        swap(arr[i], arr[n - i - 1]);
    }
}

int main () {

    int n;
    cin >> n;

    int arr[n];
    takeInput(arr, n);

    reverse(arr,n);

    printArray(arr, n);

    return 0;
}