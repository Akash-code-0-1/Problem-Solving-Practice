#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    int i = n - 2;
    while (i >= 0 and nums[i] >= nums[i + 1])
    {
        i--;
    }
    if (i >= 0)
    {
        int j = n - 1;
        while (j >= 0 and nums[j] <= nums[i])
        {
            j--;
        }
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());
}

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