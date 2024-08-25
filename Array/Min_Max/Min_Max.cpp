#include <bits/stdc++.h>
using namespace std;

void get_min_max(int arr[], int n, int &min, int &max)
{
    min = INT_MAX;
    max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    get_min_max(arr, n, min, max);
    cout << "Minimum: " << min << "\n"
         << "Maximum: " << max << endl;
    return 0;
}