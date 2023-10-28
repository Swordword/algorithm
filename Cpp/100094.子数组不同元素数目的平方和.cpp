// https://leetcode.cn/contest/biweekly-contest-116/problems/subarrays-distinct-element-sum-of-squares-i/

#include "common.h"

// 复制 class Solution {}

class Solution
{
public:
    int sumCounts(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i; j < nums.size(); ++j)
            {

                std::set<int> uniqueNums(nums.begin() + i, nums.begin() + j + 1);
                int count = uniqueNums.size();
                cout << "count " << count << endl;
                sum += count * count;
            }
        }
        return sum;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 1};
    auto res = s.sumCounts(nums);
    cout << res << endl;

    // int arr[] = {1, 1};
    // std::set<int> uniqueValues(nums.begin(), nums.end());
    // cout << uniqueValues.size() << endl;

    return 0;
}