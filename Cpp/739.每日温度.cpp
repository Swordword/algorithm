#include "common.h"
/*
 * @lc app=leetcode.cn id=739 lang=cpp
 *
 * [739] 每日温度
 */

// @lc code=start
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        vector<int> res(n);
        int *sta = new int[n];
        int top = -1;
        for (int i = 0; i < n; i++)
        {
            /* code */
            while (top != -1 && temperatures[i] > temperatures[sta[top]])
            {
                res[sta[top]] = i - sta[top];
                top--;
            }
            sta[++top] = i;
        }
        delete[] sta;
        return res;
    }
};
// @lc code=end
