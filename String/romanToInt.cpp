#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int total = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (roman[s[i + 1]] <= roman[s[i]]) // XIV
            {
                total += roman[s[i]];
            }
            else
            {
                total -= roman[s[i]];
            }
        }
        return total;
    }
};

int main()
{
    Solution obj;
    string s = "XIV"; //14   X + IV , 10 + 4
    cout << obj.romanToInt(s) << endl;

    return 0;
}