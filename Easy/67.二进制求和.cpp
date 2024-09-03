/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
class Solution {
#define XOR(a, b) ((a) == (b) ? '0' : '1')
public:
    string addBinary(string a, string b) {
        int count = 0;
        char up = '0';
        std::string max = a.size() >= b.size() ? a : b;
        if (a.size() < max.size()) a.insert(a.begin(), max.size() - a.size(), '0');
        if (b.size() < max.size()) b.insert(b.begin(), max.size() - b.size(), '0');
        std::reverse(a.begin(), a.end());
        std::reverse(b.begin(), b.end());
        for(int i = 0; i < max.size(); i++,count = 0){
            // 先判断是否需要进位
            if(a[i] == '1')count++;
            if(b[i] == '1')count++;
            if(up == '1')count++;
            // 计算
            max[i] = XOR(up, XOR(a[i], b[i]));
            // 进位
            up = count > 1 ? '1' : '0';
        }
        if(up == '1') max += '1';
        std::reverse( max.begin(), max.end());
        return max;
    }
};
// @lc code=end

