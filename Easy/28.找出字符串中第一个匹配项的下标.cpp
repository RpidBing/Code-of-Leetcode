/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

// @lc code=start

/*
* @function 使用暴力匹配破解计算
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h_length = haystack.size();
        int n_length = needle.size();
        for(int i = 0; i < h_length; i++){
            if(h_length - i < n_length)return -1;
            int j = 0;
            for(j = 0; j < n_length; j++){
                if(haystack[i + j] != needle[j])break;
            }
            if(j == n_length)return i;
        }
        return -1;
    }
};
// @lc code=end

