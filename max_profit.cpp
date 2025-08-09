#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0, profit = 0;

        for (int i = 1; i < prices.size(); ++i)
        {
            profit += prices[i] - prices[i-1];

            if(profit > maxProfit)
            {
                maxProfit = profit;
            }
            else if (profit < 0)
            {
                profit = 0;
            }
        }

        return maxProfit;
    }
};

int main()
{
    Solution maxProfit;
    vector<int> prices{5,4,3,4,9,3,4,6,2,6,7,3,9};

    int maximum_profit = maxProfit.maxProfit(prices);

    cout << maximum_profit;
}