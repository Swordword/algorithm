// https://leetcode-cn.com/problems/eliminate-maximum-number-of-monsters/
#include "common.h"

class Solution
{
public:
  int eliminateMaximum(vector<int> &dist, vector<int> &speed)
  {
    const int sz = dist.size();
    vector<float> timeList(sz);
    for (auto i = 0; i < sz; i++)
    {
      timeList[i] = dist[i] / (speed[i] / 1.0);
    }
    sort(timeList.begin(), timeList.end());
    int res = 0;
    for (auto i = 0; i < sz; i++)
    {
      if (timeList[i] > i)
      {
        res++;
      }
      else
        break;
    }

    return res;
  }
};