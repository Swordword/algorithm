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
        const size_t totalSize = temperatures.size();
        vector<int> res(totalSize, 0);
        for (size_t i = 0; i < totalSize - 1; i++)
        {
            for (size_t j = i + 1; j < totalSize; j++)
            {
                if (temperatures[j] > temperatures[i])
                {
                    res[i] = j - i;
                    break;
                }
            }
        }

        return res;
    }
};
// @lc code=end
