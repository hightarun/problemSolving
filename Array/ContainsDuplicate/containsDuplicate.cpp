#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int j = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[j])
            {
                return true;
            }
            else
            {
                j++;
            }
        }
        return false;
    }
};

int main()
{
    Solution obj;
    vector<int> nums{1, 2, 3, 4};
    if (obj.containsDuplicate(nums))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}