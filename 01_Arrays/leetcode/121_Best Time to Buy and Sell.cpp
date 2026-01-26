#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int daily;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            buy=min(buy,prices[i]);
            daily=prices[i]-buy;
            profit=max(daily,profit);
        }
        return profit;
    }
};