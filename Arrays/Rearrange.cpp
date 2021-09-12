/*
* Program to rearrange an array such that all -ve elements comes first in array from +ve numbers
*/

#include<bits/stdc++.h>
#include"ArrayUtils.h"

using namespace std;

void rearrange(int arr[],int n){

    int i = 0;
    int j = 0;

    for (i; i < n;++i){
        if(arr[i] < 0){
            if(i != j){
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}

void rearrange2pointer(int arr[],int n){
    int left = 0;
    int right = n - 1;


    while(left <= right){
        if(arr[left] < 0 && arr[right] < 0){
            left++;
        }else if(arr[left] > 0 && arr[right]>0){
            right--;
        }else if(arr[left] > 0 && arr[right] < 0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }else{
            left++;
            right--;
        }
    }
}

int main () {

    int n;
    cin >> n;

    int arr[n];
    takeInput(arr, n);

    // rearrange(arr, n);
    rearrange2pointer(arr, n);

    printArray(arr, n);
    return 0;
}