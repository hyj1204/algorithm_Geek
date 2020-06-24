/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int steps;
        int one_step_before = 2;
        int two_steps_before = 1;
        if (n <= 0) return 0;
        if (n < 3) return n;

        //没有真正使用recursion，而是把每一次求出来的值保存起来用于下次计算
        for (int i = 2; i < n; i++)
        {
            steps = one_step_before + two_steps_before;
            //下面是为下一次的recursion设置值
            two_steps_before = one_step_before;
            one_step_before = steps;
        }
        return steps;
    }
};
// @lc code=end

