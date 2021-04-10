#include <iostream>

using namespace std;

int fastPower(long a, long b, int n)
{
    long res = 1;
    while (b > 0)
    {
        if ((b & 1) != 0)
        {
            //(a*b)%n = (a%n * b%n)%n
            res = (res % n * a % n) % n; //res = res * a;
        }
        a = (a % n * a % n) % n;
        b = b >> 1; // b>>1 = b/2 and b<<1 = b*2
    }
    return res;
}

int main()
{
    int a = 22323232, b = 5;

    cout << fastPower(a, b, 1000000007) << endl;
}