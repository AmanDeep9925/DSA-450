#include <bits/stdc++.h>
using namespace std;

void takeInput(int arr[], int n)
{

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
}

void take2DInput(int arr[][2], int N, int M)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> arr[i][j];
        }
    }
}