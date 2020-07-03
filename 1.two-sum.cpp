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
 
//way 2: double points
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> result;
//         vector<int> sorted_nums;

//         //new sorted array
//         sorted_nums = nums;
//         sort(sorted_nums.begin(), sorted_nums.end());

//         //get the 2 num we want from sorted array by two pointers technique
//         int i = 0;
//         int j = sorted_nums.size() - 1;
//         while (i < j) {
//             if (sorted_nums[i] + sorted_nums[j] > target)
//                 j--;
//             else if (sorted_nums[i] + sorted_nums[j] < target)
//                 i++;
//             else
//             {
//                 // find their indices in origin array
//                 int find_i = 0;
//                 int find_j = 0;
//                 for (int z = 0; z < nums.size(); z++)
//                 {
//                     if (!find_i && nums[z] == sorted_nums[i]) {
//                         result.push_back(z);
//                         find_i = 1;
//                     } else if (!find_j && nums[z] == sorted_nums[j]) {
//                         result.push_back(z);
//                         find_j = 1;
//                     }
//                     if (find_i && find_j)
//                         return result;
//                 } 
//             }    
//         }
//         return result;
//     }
// };

// way 3 : hash 
// for each a : 
//     check(target -a) exists in this array
// 因为题目要求是假设只有一个solution,
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> check_map;
        //新建一个check_map，key是arr里面的数，value是这个数的index
        //然后对于arr中的每一个数，
        for (int i = 0; i < nums.size(); i++) {
            //对于arr中的每一个数
            int check_num = target - nums[i];

            if (check_map.count(check_num)) //判断要找的差值是不是已经在map里了
                return { check_map[check_num], i}; //如果是的话，就返回这个差值的index 和 当前这个数的index
            check_map[nums[i]] = i; //key是arr里面的数，value是这个数的index
        }
        return {};
    }
};

// @lc code=end

