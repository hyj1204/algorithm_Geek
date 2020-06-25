/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;
        vector<int> one_result;
        if (nums.size() <= 2) //元素不够的时候返回空vector
        {
            return results;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (nums[i] > 0)
            {
                break; //当数字是大于0的时候，跳出for循环
            } //保证第一数是从一定是负数

            int target = -nums[i];
            int left =  i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                if (nums[left] + nums[right] == target)
                {
                    one_result = {nums[i], nums[left], nums[right]};
                    results.push_back(one_result);
                    //去重
                    //left 和 right 移动之后所指向的值跟它之前指向的值是相同的时候就自动向相应方向移动
                    int left_num = nums[left];
                    int right_num = nums[right];
                    while (left < right && nums[left] == left_num)
                    {
                        left++;
                    }
                    while (left < right && nums[right] == right_num)
                    {
                        right--;
                    }
                }
                else if (nums[left] + nums[right] < target)
                    left++;
                else if (nums[left] + nums[right] > target)
                    right--;
            }
            //去重：前面一个target和后面一个target是一样的时候               
            while (i + 1 < nums.size() -2 && nums[i] == nums[i + 1])
            {
                i++;
            }
        }
        return results;
    }
};
// @lc code=end

