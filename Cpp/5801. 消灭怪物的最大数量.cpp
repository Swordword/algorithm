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
      timeList[i] = (float)dist[i] / (float)speed[i];
    }
    sort(timeList.begin(), timeList.end());
    int idx = 0;
    while (timeList[idx] > idx && idx <= sz - 1)
    {
      idx++;
    }
    
    return idx;
  }
};