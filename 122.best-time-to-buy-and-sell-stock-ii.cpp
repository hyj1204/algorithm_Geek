/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            profit = profit + max(prices[i] - prices[i-1], 0);
            //从1位置开始，后一个比前一个大的话（差值是>0),就累加利润
        }
        return profit;
    }
};
// @lc code=end

