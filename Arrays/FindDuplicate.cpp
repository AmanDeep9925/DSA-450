#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

int findDuplicate(int arr[],int N){
    int tortoise = arr[0];
    int hare = arr[0];

    do{

        tortoise = arr[tortoise];
        hare = arr[arr[hare]];
    }while(hare != tortoise);

    tortoise = arr[0];
    while(hare != tortoise){
        tortoise = arr[tortoise];
        hare = arr[hare];
    }

    return hare;
}

int main () {
    
    int N;
    cin >> N;

    int arr[N];

    takeInput(arr,N);

    int ans = findDuplicate(arr,N);

    cout << ans ;

    return 0;
}