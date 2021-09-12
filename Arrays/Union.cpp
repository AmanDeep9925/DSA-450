#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

int * findUnion(int A[],int n,int B[],int m){

    int size;
    if(n > m){
        size = n;
    }else{
        size = m;
    }

    int *ans = new int[size];

    int i = 0;
    int j = 0;
    int k = 0;

   while(i < n && j < m){
       if(A[i] < B[j]){
           ans[k++] = A[i++];
       }else if(A[i] > B[j]){
           ans[k++] = B[j++];
       }else if(A[i] == B[j]){
           ans[k++] = B[j++];
           i++;
       }
   }

   while(i < n){
       ans[k++] = A[i++];
   }

   while(j < m){
       ans[k++] = B[j++];
   }

    return ans;
}

int main () {

    int n,m;
    cin >> n >> m;

    int A[n], B[m];

    takeInput(A, n);
    takeInput(B, m);

    int *ans = findUnion(A, n, B, m);

    printArray(ans, n);

    return 0;
}