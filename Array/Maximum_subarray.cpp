#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        if (maxSum < currentSum) {
            maxSum = currentSum;
        }

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int array[] = {3, 4, 5, 6, 7, 2, 10, 8};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Maximum subarray sum: " << maxSubArraySum(array, n) << endl;

    return 0;
}