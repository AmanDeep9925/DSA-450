#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

int maxSubArraySum(int arr[],int n){
    int curSum = INT_MIN;
    int maxSum = INT_MIN;

    for (int i = 0; i < n;++i){
        
        if(curSum >= 0){
            curSum += arr[i];
        }else{
            curSum = arr[i];
        }

        if(maxSum < curSum){
            maxSum = curSum;
        }
    }

    return maxSum;
}

int main () {

    int n;
    cin >> n;

    int arr[n];

    takeInput(arr, n);

    int ans = maxSubArraySum(arr, n);

    cout << ans;
    return 0;
}