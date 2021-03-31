#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m + n;
        while (m > 0 && n > 0)
        {
            //finding the greatest from end of 2 list and putting it in end of the num1 array (coz both the list is already sorted)
            if (nums1[m - 1] > nums2[n - 1])
            {
                nums1[i - 1] = nums1[m - 1];
                --m;
            }
            else
            {
                nums1[i - 1] = nums2[n - 1];
                --n;
            }
            --i;
        }
        while (n > 0)
        {
            nums1[i - 1] = nums2[n - 1];
            --n;
            --i;
        }
    }
};

int main()
{
    Solution obj;
    int m = 0, n = 1;
    vector<int> nums1 = {0};
    vector<int> nums2 = {1};
    obj.merge(nums1, m, nums2, n);
    for (auto c : nums1)
    {
        cout << c << " ";
    }
}