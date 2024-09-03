/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        long long int n = 0;
        if(x <= 1)return x;
        for(n = 1; n < x; n++){
            if(n * n > x)break;
        }
        return n - 1;
    }
};
// @lc code=end

