// https://leetcode-cn.com/contest/biweekly-contest-56/problems/count-square-sum-triples/

#include "common.h"

class Solution
{
public:
  int countTriples(int n)
  {
    int res = 0;
    for (int i = 1; i < n; ++i)
    {
      for (int j = 1; j < n; ++j)
      {
        float c = sqrt(i * i + j * j);
        int p = c / 1;
        if (c <= n && p * 1 == c)
          res++;
      }
    }
    return res;
  }
};