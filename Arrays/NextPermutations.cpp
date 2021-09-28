#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

void reverse(int arr[],int be,int en){
    int i = be;
    int j = en;

    while(i < j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void nextPermutation(int arr[],int N){
    int i = N - 2;

    while(i >=0 && arr[i + 1] <= arr[i]){
        i--;
    }

    if(i >= 0){
        int j = N - 1;

        while(arr[j] <= arr[i]){
            j--;
        }
        swap(arr[i],arr[j]);
    }
    reverse(arr,i + 1,N - 1);
}

int main () {

    int N;
    cin >> N;

    int arr[N];
    takeInput(arr,N);

    nextPermutation(arr,N);
    printArray(arr,N);
    return 0;
}