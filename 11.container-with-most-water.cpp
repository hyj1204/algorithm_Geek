/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int area = 0;
        int i = 0;
        int j = height.size() - 1;
        int minHeight = 0;
        while (i < j)
        {
            int minHeight = min(height[i], height[j]);
            if (minHeight == height[i])
                i++;
            else
                j--;
        
            area = (j - i + 1) * minHeight;
            max_area = max(max_area, area);
        }
            
        return max_area;
    }
};
// @lc code=end

