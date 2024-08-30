/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
private:
    std::string commonPrefix(std::string str1, std::string str2){
        std::string str = "";
        int i = 0;
        while(i < str1.size() && i < str2.size() && str1[i] == str2[i]){
            str += str1[i];
            i++;
        }
        return str;
    }

public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        std::string rstr = strs[0];
        for(int i = 1; i < strs.size(); i++){
            rstr = commonPrefix(rstr, strs[i]);
        }
        return rstr;
    }
};
// @lc code=end

