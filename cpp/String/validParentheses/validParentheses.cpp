#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        char top;

        for (int i = 0; i < s.length(); i++)
        {
            // if opening parenthesis push in stack
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stk.push(s[i]);
            }
            else
            {
                //if stk is empty till now , ie. no opening parenthesis encountered , then it is invalid (coz cannot open from closing parenthesis)
                if (stk.empty())
                {
                    return false;
                }
                else
                {
                    top = stk.top();
                    if (s[i] == ')' && top == '(' || s[i] == '}' && top == '{' || s[i] == ']' && top == '[')
                    {
                        stk.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }

        if (stk.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Solution obj;
    string s = "{[]}";
    if (obj.isValid(s))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}