#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    s.push_back(i);
                    s.push_back(j);
                    return s;
                }
            }
        }
        return s;
    }
};

int main()
{
    Solution obj;
    int target = 9;
    vector<int> nums{2, 7, 11, 15};
    vector<int> x = obj.twoSum(nums, target);
    for (auto c : x)
    {
        cout << c << " ";
    }

    return 0;
}