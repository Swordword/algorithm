/*
 * @lc app=leetcode.cn id=771 lang=cpp
 *
 * [771] 宝石与石头
 */
#include "common.h"
// @lc code=start
class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        int res = 0;
        for (char c : S)
        {
            if (J.find(c) != string::npos)
            {
                cout << "J has c " << J << " " << c << endl;
                ++res;
            }
        }
        return res;
    }
};
// @lc code=end
