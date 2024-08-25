#include <iostream>
using namespace std;

// Function to check if there exists a subarray with a product equal to k
bool hasSubarrayWithProduct(int *arr, int n, int k)
{
    int start = 0;
    int product = 1;

    for (int end = 0; end < n; ++end)
    {
        product *= arr[end];

        // If the product becomes zero and k is not zero, move the start to skip zero
        while (start <= end && product == 0 && k != 0)
        {
            start++;
            product = 1;
            for (int i = start; i <= end; ++i)
            {
                product *= arr[i];
            }
        }

        // If product exceeds k, move the start pointer to reduce the product
        while (start <= end && product != 0 && abs(product) > abs(k))
        {
            product /= arr[start];
            start++;
        }

        // Check if the current product is equal to k
        if (product == k)
        {
            return true;
        }
    }

    return false; // If no subarray with product k is found, return false
}

int main()
{
    int arr[] = {1, 2, -5, -4};           // Input array
    int product = -10;                    // Target product value
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Check if there is a subarray with the given product and print the result
    if (hasSubarrayWithProduct(arr, n, product))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0; // Exit the program
}
