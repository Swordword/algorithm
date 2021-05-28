/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */
// #include "common.h"
// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        if (n <= 1)
        {
            return n;
        }
        unordered_set<char> lookup;
        int maxStr = 0;
        int left = 0;
        for (int i = 0; i < n; i++)
        {
            while (lookup.find(s[i]) != lookup.end())
            {
                lookup.erase(s[left]);
                left++;
            }
            maxStr = max(maxStr, i - left + 1);
            lookup.insert(s[i]);
        };
        return maxStr;
    }
};
// @lc code=end
