#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

void sort012(int arr[],int n){
    int zeros = 0;
    int ones = 0;
    int twos = 0;

    for (int i = 0; i < n;++i){
        switch(arr[i]){
            case 0 :
                zeros++;
                break;
            case 1 :
                ones++;
                break;
            case 2:
                twos++;
                break;
        }
    }

    int j = 0;
    while(zeros > 0){
        arr[j] = 0;
        zeros--;
        j++;
    }

    while(ones > 0){
        arr[j] = 1;
        ones--;
        j++;
    }

    while(twos > 0){
        arr[j] = 2;
        twos--;
        j++;
    }
}

int main () {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n;++i){
        cin >> arr[i];
    }

    sort012(arr, n);

    printArray(arr, n);
    return 0;
}