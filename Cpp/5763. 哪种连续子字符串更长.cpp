// https://leetcode-cn.com/contest/weekly-contest-242/problems/longer-contiguous-segments-of-ones-than-zeros/

#include "common.h"
class Solution
{
public:
  bool checkZeroOnes(string s)
  {
    int zero_max = 0, zero_len = 0, one_len = 0, one_max = 0;
    char prev = NULL;
    for (auto &&i : s)
    {
      if (i == '0')
      {
        if (prev == i||!prev)
        {
          zero_len++;
        }
        else
        {
          zero_len = 1;
        }
      }
      if (i == '1')
      {
        if (prev == i||!prev)
        {
          one_len++;
        }
        else
        {
          one_len = 1;
        }
      }
      zero_max = zero_max < zero_len ? zero_len : zero_max;
      one_max = one_max < one_len ? one_len : one_max;
      prev = i;
    }
    return one_max > zero_max;
  }
};
