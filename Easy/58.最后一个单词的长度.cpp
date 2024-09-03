/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int str_length = s.size();
        int count = 0, last = 0;
        for(int i = 0; i < str_length; i++){
            if(s[i] != ' '){
                count++;
            }else{
                if(count != 0)last = count;
                count = 0;
            }
        }
        if(s.back() != ' '){
            return count;
        }else{
            return last;
        }
    }
};
// @lc code=end

