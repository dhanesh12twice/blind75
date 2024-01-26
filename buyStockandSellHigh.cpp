#include<iostream>
#include<vector>

using namespace std;

// Buying stock less and selling it as high
// Classic two pointers approach

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0, j = 0;
        int profit = 0;
        while(j < prices.size()){
            if(prices[j] > prices[i]){
                if((prices[j] - prices[i]) > profit){
                    profit = (prices[j] - prices[i]);
                }
            }
            if(prices[j] < prices[i]){
                i = j;
            }
            j++;
            
        }

        return profit;
    }
};

int main(){
    vector<int> stockprice = {7,1,5,3,6,4};
    Solution solution;
    cout << "Maximum profit can be made is : " << solution.maxProfit(stockprice) << endl;
    return 0;
}