/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, char> pointer = {
            {'(', ')'},
            {'[', ']'},
            {'{', '}'}
        };
        std::string stack = "";
        for(char i : s){
            if(pointer.find(i) != pointer.end()){
                stack += i;
            }else{
                if(!stack.empty() && pointer[stack.back()] == i){
                    stack.pop_back();
                }else{
                    return false;
                }
            }
        }
        return stack.empty();
    }
};
// @lc code=end

