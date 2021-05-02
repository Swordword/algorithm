// https://leetcode-cn.com/contest/weekly-contest-239/problems/minimum-distance-to-the-target-element/
#include "common.h"

class Solution
{
public:
  int getMinDistance(vector<int> &nums, int target, int start)
  {
    int res;
    for (auto i = 0; i < nums.size(); i++)
    {
      if (nums[i] == target)
      {
        int temp = std::abs(i - start);
        if (temp < res)
          res = temp;
      }
    }
    return res;
  }
};