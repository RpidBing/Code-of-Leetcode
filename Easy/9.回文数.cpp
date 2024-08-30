/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = to_string(x);
        std::string rstr = str;
        std::reverse(rstr.begin(), rstr.end());
        return str == rstr ? true : false;
    }
};
// @lc code=end

