// https://leetcode-cn.com/contest/weekly-contest-286/problems/find-the-difference-of-two-arrays/

#include "./common.h"

class Solution
{
public:
  vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
  {
    vector<vector<int>> answer{{}, {}};
    for (auto i : nums1)
    {
      if (find(nums2.begin(), nums2.end(), i) == nums2.end() && find(answer[0].begin(), answer[0].end(), i) == answer[0].end())
      {
        answer[0].push_back(i);
      }
    }
    for (auto i : nums2)
    {
      if (find(nums1.begin(), nums1.end(), i) == nums1.end() && find(answer[1].begin(), answer[1].end(), i) == answer[1].end())
      {
        answer[1].push_back(i);
      }
    }

    return answer;
  }
};