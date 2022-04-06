#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int n)
{
    int orig = n, rev = 0, digit;
    while (n > 0)
    {

        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    cout << "Reverse of the number is " << rev << endl;
    if (rev == orig)
    {
        return true;
    }
    return false;
}

int main()
{
    int n = 121;

    if (isPalindrome(n))
    {
        cout << "PALINDROME";
    }
    else
    {
        cout << "!PALINDROME";
    }
}