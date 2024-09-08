#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the next permutation
void nextPermutation(vector<int> &arr)
{
    // Find the first element that is not in decreasing order from right
    auto it = is_sorted_until(arr.rbegin(), arr.rend());

    // If all elements are in decreasing order, reverse the array
    if (it == arr.rend())
    {
        reverse(arr.begin(), arr.end());
    }
    else
    {
        // Find the next permutation
        auto next_it = upper_bound(arr.rbegin(), it, *it);
        swap(*it, *next_it);
        reverse(arr.rbegin(), it);
    }
}

// Driver code
int main()
{
    // Given input array
    vector<int> arr = {3, 2, 1};

    // Function call
    nextPermutation(arr);

    // Printing the answer
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
