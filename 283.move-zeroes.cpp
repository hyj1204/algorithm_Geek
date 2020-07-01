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
            if (nums[i]  != 0) //遇到非0值就把这个值放入nums[j]
            {
                nums[j] = nums[i];
                if (i != j) //数字被放进nums[j]之后，原来的nums[i]就改为0，说明这个数字已经被放好了。
                    nums[i] = 0; 
                j++;
            }
        }        
    }
};
//8 ms	8.9 MB

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != 0)
//                 swap(nums[j++],nums[i]); //遇到非零值，交换位置
//         }
//     }
// };

//8 ms	8.9 MB

// @lc code=end

