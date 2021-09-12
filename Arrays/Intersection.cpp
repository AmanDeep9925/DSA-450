#include<bits/stdc++.h>
#include"ArrayUtils.h"
using namespace std;

int * findIntersection(int A[],int n,int B[],int m){

    int size;
    if(n < m){
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
           i++;
       }else if(A[i] > B[j]){
           j++;
       }else if(A[i] == B[j]){
           ans[k++] = B[i++];
           j++;
       }
   }

    return ans;
}

int main () {

    int n,m;
    cin >> n >> m;

    int A[n], B[m];

    takeInput(A, n);
    takeInput(B, m);

    int *ans = findIntersection(A, n, B, m);

    int size = (n > m) ? m : n;
    printArray(ans, size);

    return 0;
}