#include <bits/stdc++.h>
using namespace std;

int get_min(int arr[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int get_max(int arr[], int n)
{
    int max = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum: " << get_min(arr, n) << endl;
    cout << "Maximum: " << get_max(arr, n) << endl;
}