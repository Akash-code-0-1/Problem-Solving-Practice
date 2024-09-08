#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 3, 2};
    next_permutation(arr.begin(), arr.end());
    for (int num : arr)
        cout << num << " ";
    return 0;
}
