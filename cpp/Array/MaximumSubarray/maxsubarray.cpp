#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> nums)
    {
        int current = nums[0];
        int maxSum = current;
        if (nums.empty())
        {
            return 0;
        }
        for (int i = 1; i < nums.size(); i++)
        {
            int n = nums[i];
            current = max(nums[i], current + n);
            maxSum = max(maxSum, current);
        }
        return maxSum;
    }
};

int main()
{
    Solution obj;
    vector<int> nums{5, 4, -1, 7, 8};
    cout << obj.maxSubArray(nums) << endl;
    return 0;
}