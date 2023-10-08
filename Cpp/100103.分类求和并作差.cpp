// https://leetcode.cn/contest/weekly-contest-366/problems/divisible-and-non-divisible-sums-difference/

#include "common.h"

// 复制 class Solution {}
class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int num1 = 0;
        int num2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % m == 0)
            {
                num2 += i;
            }
            else
            {
                num1 += i;
            }
        }
        return num1 - num2;
    }
};

int main()
{
    Solution s;

    auto res = s.differenceOfSums(10, 3);
    cout << res << endl;
    return 0;
}