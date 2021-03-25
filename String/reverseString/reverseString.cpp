#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int left = 0;
        int right = s.size() - 1;
        while (left < right)
        {
            char temp = s[left];
            s[left++] = s[right];
            s[right--] = temp;
        }
    }
};

int main()
{
    Solution obj;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    obj.reverseString(s);
    cout << endl
         << "[";
    for (auto c : s)
    {

        if (c == s.at(s.size() - 1))
        {
            cout << "\"" << c << "\"";
        }
        else
        {
            cout << "\"" << c << "\",";
        }
    }
    cout << "]" << endl;
    return 0;
}