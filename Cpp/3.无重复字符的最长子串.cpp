/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */
#include "common.h"
// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        if (n <= 1)
            return n;
            
        int max = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            cout << s[i] << endl;
        }
    }
};
// @lc code=end
