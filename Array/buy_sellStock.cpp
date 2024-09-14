#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &price)
{
    int profit = 0;
    int buy = price[0];

    for (int i = 1; i < price.size(); i++)
    {
        if (price[i] < buy)
        {
            buy = price[i];
        }
        if (price[i] - buy > profit)
        {
            profit = price[i] - buy;
        }
    }
    return profit;
}
int main()
{
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    int res = solve(nums);
    cout << res << endl;
    return 0;
}