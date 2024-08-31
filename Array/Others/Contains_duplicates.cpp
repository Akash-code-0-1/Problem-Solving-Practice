#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    return nums.size() > set<int>(nums.begin(), nums.end()).size();
}

int main()
{
    vector<int> array = {3, 4, 5, 6, 7, 2, 10, 8};

    if (containsDuplicate(array))
    {
        cout << "Array contains duplicate elements." << endl;
    }
    else
    {
        cout << "Array does not contain duplicate elements." << endl;
    }

    return 0;
}