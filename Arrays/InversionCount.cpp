#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

int inversionCount(int arr[],int N){
    
    int count = 0;

    for(int i=0;i<N;++i){
        for(int j =0;j < N;++j){
            if(i < j && arr[i] > arr[j]){
                count++;
            }
        }
    }

    return count;
}

int main () {

    int N;
    cin >> N;

    int arr[N];
    takeInput(arr,N);
    
    int ans = inversionCount(arr,N);
    cout << ans << "\n";

    return 0;
}