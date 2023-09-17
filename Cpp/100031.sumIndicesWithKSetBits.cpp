// https://leetcode.cn/contest/weekly-contest-363/problems/sum-of-values-at-indices-with-k-set-bits/

#include "common.h"

class Solution
{
public:
    int sumIndicesWithKSetBits(vector<int> &nums, int k)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            int index = i;
            while (index > 0)
            {
                if (index % 2 == 1)
                {
                    count++;
                }
                index /= 2;
            }
            if (count == k)
            {
                sum += nums[i];
            }
        }
        return sum;
    }
};

int main()
{
    Solution s;

    vector<int> nums = {5, 10, 1, 5, 2};
    int k = 1;
    auto res = s.sumIndicesWithKSetBits(nums, k);
    cout << res << endl;
    return 0;
}