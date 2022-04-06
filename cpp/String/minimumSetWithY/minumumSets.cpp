#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum number of shets
int minimumSets(string s, int y)
{
    int count = 0;
    int num = 0;
    int flag = 0;

    int l = s.length();

    for (int i = 0; i < l; i++)
    {
        num = num * 10 + (s[i] - '0');
        if (num <= y)
        {
            flag = 1;
        }
        else
        {
            if (flag)
            {
                count += 1;
            }
            num = s[i] - '0';
            flag = 0;

            if (num <= y)
            {
                flag = 1;
            }
            else
            {
                num = 0;
            }
        }
    }
    if (flag)
    {
        count += 1;
    }
    return count;
}

// Driver Code
int main()
{
    string s = "1234";
    int y = 30;
    cout << minimumSets(s, y);

    return 0;
}