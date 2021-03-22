/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */
#include "common.h"
// @lc code=start
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        unsigned int c = 0;     // 计数器
        for (c = 0; n; n >>= 1) // 循环移位
            c += n & 1;         // 如果当前位是1，则计数器加1
        return c;
    }
};
// @lc code=end
