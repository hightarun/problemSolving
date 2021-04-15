#include <iostream>
#include <vector>

using namespace std;

bool ar[90000001];

vector<int> primes;

void sieve()
{

    ar[0] = ar[1] = true;
    int maxN = 90000000;

    for (int i = 2; i * i < maxN; i++)
    {
        if (!ar[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                ar[j] = true;
            }
        }
    }

    for (int i = 2; i <= maxN; i++)
    {
        if (!ar[i])
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    int q, n;
    cin >> q;
    sieve();
    while (q--)
    {
        cin >> n;
        cout << primes[n - 1] << endl;
    }
}

/*
Input:
7
1
10
100
1000
10000
100000
1000000

Output:
2
29
541
7919
104729
1299709
15485863

*/