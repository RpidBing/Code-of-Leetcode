/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty())return 0;
        int next = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                if(i != 0)nums[next] = nums[i];
                next++;
            }
        }
        return next;
    }
};
// @lc code=end

