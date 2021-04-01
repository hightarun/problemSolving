#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
        {
            return 0;
        }
        int x = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[j] != nums[x])
            {
                ++x;
                nums[x] = nums[j];
            }
        }
        return x + 1;
    }
};

int main()
{
    Solution obj;
    vector<int> nums{1, 1, 2, 3, 3, 4, 4};
    int len = obj.removeDuplicates(nums);
    cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << nums.at(i) << " ";
    }
    return 0;
}