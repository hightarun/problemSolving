#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    //simpler
    // int strStr(string haystack, string needle)
    // {
    //     if (needle.empty())
    //     {
    //         return 0;
    //     }
    //     if (haystack.empty())
    //     {
    //         return -1;
    //     }
    //     int pos;
    //     pos = haystack.find(needle);
    //     if (pos != string::npos)
    //     {
    //         return pos;
    //     }
    // }
    int strStr(string haystack, string needle)
    {
        if (needle.empty())
        {
            return 0;
        }
        if (haystack.empty())
        {
            return -1;
        }

        int x = haystack.length();
        int y = needle.length();

        if (x < y)
        {
            return -1;
        }

        // x-y coz no space left for needle after x-y position
        for (int i = 0; i < x; i++)
        {
            int j;
            for (j = 0; j < y; j++)
            {
                if (haystack.at(i + j) != needle.at(j))
                {
                    break;
                }
            }
            if (j == y)
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
    string haystack = "heoooll", needle = "ll";

    cout << obj.strStr(haystack, needle);

    return 0;
}