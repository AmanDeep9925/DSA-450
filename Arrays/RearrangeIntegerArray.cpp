#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

void rearrangeArray(int arr[],int N){
    int left = 0;
    int right = N - 1;

    while(left < right){
        while(left <= N - 1 && arr[left] > 0){
            left++;
        }

        while(right >= 0 && arr[right] < 0){
            right--;
        }

        if(left < right){
            swap(arr[left],arr[right]);
        }
    }

    if(left == 0 && left == N){
        return;
    }

    int k = 0;

    while(k < N && left < N){
        swap(arr[k],arr[left]);
        left++;
        k+=2;
    }
}

int main () {
    
    int N;
    cin >> N;

    int arr[N];

    takeInput(arr,N);

    rearrangeArray(arr,N);

    printArray(arr,N);

    return 0;
}