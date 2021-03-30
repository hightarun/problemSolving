#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void rotateArray(int arr[], int n, int k)
{
    int p;
    for (int i = 0; i < n; i++)
    {
        p = arr[(i + (n - k)) % n];
        cout << p << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int a[n];
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        k %= n;               // k will change, if k is greater than n.
        rotateArray(a, n, k); //it will rotate the array with respect to the value of k.
    }
    return 0;
}