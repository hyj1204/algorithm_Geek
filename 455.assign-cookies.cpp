/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
// 排序之后，每一个能满足的都是最优解，贪心算法
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0; 
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                i++; 
            }
            j++;
        } // O(n) 饼干或者小朋友长度的较小者 
        return i; //返回满足了多少个小孩的数量
    }
};
// @lc code=end

