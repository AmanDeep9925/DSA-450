#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

void mergeArray(int A[],int B[],int N,int M){

    for(int i= M - 1;i >= 0;i--){
        int j,last = A[N - 1];

        for(j = N - 2;j>= 0 && A[j] > B[i];j-- ){
            A[j + 1] = A[j];
        }

        if(j != N - 2 || last > B[i]){
            A[j + 1] = B[i];
            B[i] = last;
        }
    }
}

int main () {
    
    int N,M;
    cin >> N >> M;

    int A[N],B[M];

    takeInput(A,N);
    takeInput(B,M);

    mergeArray(A,B,N,M);

    printArray(A,N);

    printArray(B,M);
    return 0;
}