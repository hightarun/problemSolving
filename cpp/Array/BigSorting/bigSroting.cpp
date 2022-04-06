#include <bits/stdc++.h>

using namespace std;

bool compare_function(string one, string two)
{
    int n1 = one.length(), n2 = two.length();

    if (n1 == n2)
    {
        return one < two;
    }
    else
    {
        return n1 < n2;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<string> nums;

    for (int i = 0; i < n; i++)
    {
        string elem;
        cin >> elem;
        nums.push_back(elem);
    }

    sort(nums.begin(), nums.end(), compare_function);

    for (auto x : nums)
    {
        cout << x << endl;
    }

    return 0;
}