#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int first;
    int second;
};

Pair get_min_max(int arr[], int n)
{
    Pair minmax;

    sort(arr, arr + n);

    minmax.first = arr[0];
    minmax.second = arr[n - 1];

    return minmax;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    Pair minmax = get_min_max(arr, n);

    cout << "Minimum: " << minmax.first << endl;
    cout << "Maximum: " << minmax.second << endl;
    
}