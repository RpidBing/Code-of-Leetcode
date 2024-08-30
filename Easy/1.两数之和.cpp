/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int subscript, vernier;
        std::vector<int> ret;
        for(subscript = 0; subscript < nums.size(); subscript++){
            for(vernier = subscript + 1;vernier < nums.size(); vernier++){
                if(nums[subscript] + nums[vernier] == target){
                    ret.push_back(subscript);
                    ret.push_back(vernier);
                    return ret;
                }
            }
        }
        return ret;
    }
};
// @lc code=end

