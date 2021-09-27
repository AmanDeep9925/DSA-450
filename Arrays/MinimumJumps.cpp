#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

int decideJumps(int arr[],int N,int curPos){
    
    if(curPos >= N - 1){
        return 0;
    }

    int minJumps = 1000;
    int maxSteps = arr[curPos];

    while(maxSteps > 0){
        minJumps = min(minJumps, 1 + decideJumps(arr,N,curPos + maxSteps));
        maxSteps--;
    }

    return minJumps;
}

int minimumJumps(int arr[],int N){
    return decideJumps(arr,N,0);
}

int main () {
    int N;

    cin >> N;

    int arr[N];

    takeInput(arr,N);

    int minJumps = minimumJumps(arr,N);

    cout << minJumps;

    return 0;
}