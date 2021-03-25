#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string temp = "";
        for (auto c : s)
        {
            if (isalnum(c))
            {
                temp += tolower(c);
            }
        }
        int l = 0, h = temp.length() - 1;

        while (l < h)
        {
            if (temp[l++] != temp[h--])
            {
                return 0;
            }
        }
        return 1;
    }
};

int main()
{
    Solution obj;
    string s = "A man, a plan, a canal: Panama";
    if (obj.isPalindrome(s))
    {
        cout << "true";
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}