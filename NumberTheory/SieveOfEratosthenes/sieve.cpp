#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//returns boolean array with true value of index which is a prime number
vector<bool> sievePrime(int n)
{
    vector<bool> isPrime(n + 1, true); //bool array of size n+1 and initialized true for every element

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        //makes every factor of i till n false as they are not prime
        for (int j = 2 * i; j <= n; j += i)
        {
            isPrime[j] = false;
        }
    }

    return isPrime;
}

int main()
{
    int n = 12;
    vector<bool> primes = sievePrime(n);

    for (int i = 0; i < n; i++)
    {
        if (primes[i])
        {
            cout << i << " ";
        }
    }

    return 0;
}