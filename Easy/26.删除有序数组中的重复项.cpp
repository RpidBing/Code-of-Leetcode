/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
        int next = 1;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] != nums[i - 1])
            {
                nums[next] = nums[i];
                next++;
            }
        }
        return next;
    }
};
// @lc code=end
