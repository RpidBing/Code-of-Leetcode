/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        unordered_map<char, int> rm_list = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        for(int i = 0; i < s.size(); i++){
            if(rm_list[s[i + 1]]){
                if(rm_list[s[i]] >= rm_list[s[i + 1]]){
                    sum += rm_list[s[i]];
                }else{
                    sum += (rm_list[s[i + 1]] - rm_list[s[i]]);
                    i++;
                }
            }else{
                sum += rm_list[s[i]];
            }
        }
        return sum;
    }
};
// @lc code=end

