/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
// way 1: brute force
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> results;
//         for (int i = 0; i < nums.size() - 1; i++)
//         {     
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 if (nums[i] + nums[j] == target)
//                 {
//                     results.push_back(i);
//                     results.push_back(j);
//                     return results;
//                 } 
//             }
//         }
//         return results;
//     }
// };
 
//way 2:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        vector<int> sorted_nums;

        //new sorted array
        sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        //get the 2 num we want from sorted array by two pointers technique
        int i = 0;
        int j = sorted_nums.size() - 1;
        while (i < j) {
            if (sorted_nums[i] + sorted_nums[j] > target)
                j--;
            else if (sorted_nums[i] + sorted_nums[j] < target)
                i++;
            else
            {
                // find their indices in origin array
                int find_i = 0;
                int find_j = 0;
                for (int z = 0; z < nums.size(); z++)
                {
                    if (!find_i && nums[z] == sorted_nums[i]) {
                        result.push_back(z);
                        find_i = 1;
                    } else if (!find_j && nums[z] == sorted_nums[j]) {
                        result.push_back(z);
                        find_j = 1;
                    }
                    if (find_i && find_j)
                        return result;
                } 
            }    
        }
        return result;
    }
};
// @lc code=end

