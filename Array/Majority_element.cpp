#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return nums[n / 2];
}
int main()
{
    vector<int> num = {3, 2, 3};
    int res = solve(num);
    cout << res << endl;
    return 0;
}