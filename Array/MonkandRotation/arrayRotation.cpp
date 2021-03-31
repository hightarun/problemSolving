#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// void rotateArray(int arr[], int n, int k)
// {
//     for (int i = 0; i < k; i++)
//     {
//         int temp;
//         temp = arr[n - 1];
//         for (int j = n - 1; j > 0; j--) //4->3 , 3->2 , 2->1 , 1->0;
//         {
//             arr[j] = arr[j - 1];
//         }
//         arr[0] = temp;
//     }
// }

void rotateArray(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[(i + (n - k)) % n] << " ";
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