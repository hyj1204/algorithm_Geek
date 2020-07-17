/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(); //这里返回的是整个matrix行数
        if (rows == 0) return false;
        int cols = matrix[0].size(); //第一行的列数

        int left = 0;
        int right = rows * cols - 1;//二维matrix所有个数index
        int index = 0;
        int element = 0;

        while (left <= right) {
            index = (left + right) / 2;
            element = matrix[index / cols][index % cols];
            //index/cols得到这个元素是在第几行，index % cols的到这个元素在第几列
            if (element == target) return true;
            else {
                if (element < target)
                    left = index + 1;
                else
                    right = index - 1;
            }
        }
        return false;
    }
};
// @lc code=end

