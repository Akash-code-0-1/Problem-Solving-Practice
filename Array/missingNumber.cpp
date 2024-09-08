#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
    int n = nums.size();
    int missing_num = (n * (n + 1) / 2);
    for (int i = 0; i < n; i++)
    {
        missing_num -= nums[i];
    }
    return missing_num;
}
int main()
{
    vector<int> num = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int res = solve(num);
    cout << "The missing number is: " << res << endl;
    return 0;
}