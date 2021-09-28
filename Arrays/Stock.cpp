#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

int maxProfit(int arr[],int N){
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int i=0;i < N;++i){
        if(arr[i] < minPrice){
            minPrice = arr[i];
        }else if(arr[i] - minPrice > maxProfit){
            maxProfit = arr[i] - minPrice;
        }
    }

    return maxProfit;
}

int main () {
    
    int N;
    cin >> N;

    int arr[N];

    takeInput(arr,N);

    int max= maxProfit(arr,N);

    cout << max;
    return 0;
}