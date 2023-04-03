#include <bits/stdc++.h>
using namespace std;

void insertAtBegining(int arr[], int n, int value)
{
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = value;
}

void insertatEnd(int *arr, int n, int value)
{
    arr[n] = value;
}

void insertAtPos(int arr[], int n, int value, int pos)//doing right shifting of elements here
{
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    insertAtBegining(arr, n, 7);

    for (int i = 0; i <= n; i++)
        cout << arr[i] << " ";
    int value = 90;
    cout << endl;
    insertatEnd(arr, n, value);
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    insertAtPos(arr, n, 45, 5);
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}