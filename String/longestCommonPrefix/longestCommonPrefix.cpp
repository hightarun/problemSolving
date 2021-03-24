#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string result = "";
        if (strs.empty())
        {
            return result;
        }

        for (int i = 0; i < strs[0].length(); i++) //flower  , length=  6
        {
            char c = strs[0].at(i); //f , l , o
            for (int j = 1; j < strs.size(); j++)
            {
                if (i >= strs[j].length() || strs[j].at(i) != c) // {0 >= 4 or f != f , 0 >=6 or f != f}  {1>= 4 or l != l , 1>=6 or l!=l}  {2>=4 or o!=o , 2>=4 or i != o}
                {
                    return result;
                }
            }
            result += c; //f , fl
        }
        return result;
    }
};

int main()
{
    Solution obj;
    vector<string> strs = {"flower", "flow", "flight"};
    cout << obj.longestCommonPrefix(strs) << endl;

    return 0;
}