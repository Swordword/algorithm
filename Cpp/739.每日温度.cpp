// #include "common.h"
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
        const int totalSize = temperatures.size();
        vector<int> res(totalSize, 0), next(101, 30100);
        for (int i = totalSize - 1; i >= 0; --i)
        {
            int temp_i = temperatures[i];
            auto tempIndex = 30100;
            for (int j = temp_i + 1; j <= 100; j++)
            {
                tempIndex = min(tempIndex, next[j]);
            }
            if (tempIndex != 30100)
            {
                res[i] = tempIndex - i;
            }
            next[temp_i] = i;
        }

        return res;
    }
};
// @lc code=end
