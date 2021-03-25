#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        if (s.empty())
        {
            return -1;
        }
        for (int i = 0; i < s.length(); i++)
        {
            bool flag = true;
            for (int j = 0; j < s.length(); j++)
            {
                if (s.at(i) == s.at(j) && j != i)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution obj;
    string s = "cc";
    cout << obj.firstUniqChar(s);
    return 0;
}