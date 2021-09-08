#include<bits/stdc++.h>
#include "ArrayUtils.h"
using namespace std;

pair<int,int> findMinMax(int arr[],int n){

    pair<int, int> ans;

    ans.first = INT_MIN;
    ans.second = INT_MAX;

    for (int i = 0; i < n;++i){
        if(arr[i] < ans.second){
            ans.second = arr[i];
        }

        if(arr[i] > ans.first){
            ans.first = arr[i];
        }
    }

    return ans;
}

int main () {

    int n;
    cin >> n;

    int arr[n];

    takeInput(arr, n);

    pair<int, int> p = findMinMax(arr, n);

    cout << "Max element: " << p.first << "\n";
    cout << "Min element: " << p.second << "\n";
    return 0;
}