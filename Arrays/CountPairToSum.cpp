#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

int countPair(int arr[],int N,int sum){
    int count = 0;

    for(int i=0; i < N; ++i){
        for(int j= i + 1;j < N;++j){
            if(arr[i] + arr[j] == sum){
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

    int sum = 0;
    cin >> sum ;

    int pairs = countPair(arr,N,sum);

    cout << pairs << "\n";
    return 0;
}