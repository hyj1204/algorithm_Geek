/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; //要填入的非零位置的地方
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]  != 0) //不是0的时候就要在nums[j]放入当前值
            {
                nums[j] = nums[i];
                if (i != j)
                {
                    nums[i] = 0; 
                    //非零值放到num[j]之后，位置不一样的话，就把原来位置上的值设为0
                }
                j++;
            }
        }
        
    }
};


// @lc code=end

