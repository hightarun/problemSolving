#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int j = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[j++] = nums[i];
            }
        }
        for (int i = j; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};

int main()
{
    Solution obj;
    vector<int> nums{1};
    obj.moveZeroes(nums);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}