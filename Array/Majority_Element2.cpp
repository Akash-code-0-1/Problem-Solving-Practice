#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
        unordered_map<int, int> m;
        
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        int con = nums.size()/2;
        for(auto x: m){
            if(x.second > con){
                return x.first;
            }
        }
        return 0;
}
int main()
{
    vector<int> num = {3, 2, 3};
    int res = solve(num);
    cout << res << endl;
    return 0;
}