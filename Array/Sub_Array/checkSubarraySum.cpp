// CPP program to check if any Subarray of size
// K has a given Sum
#include <iostream>
using namespace std;

// Function to check if any Subarray of size K
// has a  given Sum
bool checkSubarraySum(int arr[], int n,
                      int k, int sum)
{
    // Check for first window
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
        curr_sum += arr[i];
    if (curr_sum == sum)
        return true;

    cout << curr_sum << endl;

    // Consider remaining blocks ending with j
    for (int j = k; j < n; j++)
    {
        curr_sum = curr_sum + arr[j] - arr[j - k];
        cout << curr_sum << endl;

        // If current sum is equal to given sum, then return true
        if (curr_sum == sum)
            return true;
    }
    return false;
}

// Driver code
int main()
{
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;
    int sum = 18;

    int n = sizeof(arr) / sizeof(arr[0]);

    if (checkSubarraySum(arr, n, k, sum))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}