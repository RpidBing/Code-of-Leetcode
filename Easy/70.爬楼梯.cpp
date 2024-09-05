/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        // 当总结出递归函数 f(x) = f(x - 1) + f(x - 2)
        // 迭代合算公式 滑动数组法
        int one = 0, two = 0, sum = 1;
        for(int i = 0; i < n; i++){
            one = two;
            two = sum;
            sum = one + two;
        }
        return sum;
        // 递归计算 栈溢出
        // if(n == 1) return 1;
        // if(n == 2) return 2;
        // return climbStairs(n - 1) + climbStairs(n - 2);
    }
};
// @lc code=end

