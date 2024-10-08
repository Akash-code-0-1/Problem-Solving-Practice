// C++ program to split an array into Two
// equal sum subarrays
#include <bits/stdc++.h>
using namespace std;

// Returns split point. If not possible, then
// return -1.
int findSplitPoint(int arr[], int n)
{
    // traverse array element and compute sum
    // of whole array
    int leftSum = 0;
    for (int i = 0; i < n; i++)
        leftSum += arr[i];

    // again traverse array and compute right sum
    // and also check left_sum equal to right
    // sum or not
    int rightSum = 0;
    for (int j = n - 1; j >= 0; j--)
    {
        // add current element to right_sum
        rightSum += arr[j];

        // exclude current element to the left_sum
        leftSum -= arr[j];

        if (rightSum == leftSum)
            return j;
    }

    // if it is not possible to split array
    // into two parts.
    return -1;
}

// Prints two parts after finding split point using
// findSplitPoint()
void printTwoParts(int arr[], int n)
{
    int splitPoint = findSplitPoint(arr, n);

    if (splitPoint == -1 || splitPoint == n)
    {
        cout << "Not Possible" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (splitPoint == i)
            cout << endl;
        cout << arr[i] << " ";
    }
}

// driver program
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printTwoParts(arr, n);
    return 0;
}
