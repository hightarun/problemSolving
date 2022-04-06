#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    //last digit is 9 or all digits are 9
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
                digits[i] = 0;
            }
        }
        vector<int> temp{1};

        temp.insert(temp.end(), digits.begin(), digits.end());
        return temp;
    }
};

int main()
{
    Solution obj;
    vector<int> digits{9};

    vector<int> ans = obj.plusOne(digits);

    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}