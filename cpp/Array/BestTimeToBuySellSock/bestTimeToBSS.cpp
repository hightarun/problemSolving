#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int currentPrice = prices[0];
        int profit = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < currentPrice)
            {
                currentPrice = prices[i];
            }
            else if (prices[i] - currentPrice > profit)
            {
                profit = prices[i] - currentPrice;
            }
        }
        return profit;
    }
};

int main()
{
    Solution obj;
    vector<int> prices{7, 1, 5, 3, 6, 4};
    cout << obj.maxProfit(prices);

    return 0;
}