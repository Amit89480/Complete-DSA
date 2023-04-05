#include <bits/stdc++.h>
using namespace std;

int brute(int arr[], int n, int k)
{

    int i, j;
    int longestLen = 0;
 
    for (i = 0; i < n; i++)
    {
           int sum = 0;

        for (j = i; j < n; j++)
        {
            sum += arr[j];
        }
        if (sum == k)
        {
            longestLen = max(longestLen, j - i + 1);
        }
    }
    return longestLen;
}
int main()
{
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 1, 4, 2, 3};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << brute(arr, n, k);

    return 0;
}