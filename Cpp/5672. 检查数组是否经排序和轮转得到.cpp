// https://leetcode-cn.com/contest/weekly-contest-227/problems/check-if-array-is-sorted-and-rotated/
#include "common.h"

class Solution
{
public:
  bool check(vector<int> &nums)
  {
    vector<int> sorted_nums{nums};
    sort(sorted_nums.begin(), sorted_nums.end());
    if (sorted_nums == nums)
      return true;
    auto len = nums.size();

    bool res = false;
    for (auto begin = 0; begin != len; begin++)
    {
      sorted_nums.insert(sorted_nums.begin(), *(sorted_nums.end() - 1));
      sorted_nums.pop_back();
      if (sorted_nums == nums)
        res = true;
    }
    return res;
  }
};