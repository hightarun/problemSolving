#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return false;
        }
    }
    return true;
}

bool isPrimeBetter(int n)
{
    if (n == 1)
        return false;
    else
    {
        for (int i = 2; i *i = n; i++)
        {
            if (n % i == 0)
                return false;
        }
    }
    return true;
}

int main()
{
    if (isPrimeBetter(5))
    {
        cout << "PRIME" << endl;
    }
    else
    {
        cout << "NOT PRIME" << endl;
    }
}