// https://leetcode-cn.com/contest/weekly-contest-231/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
#include "common.h"

class Solution
{
public:
  bool checkOnesSegment(string s)
  {
    if (s.size() == 1)
      return true;
    bool res;
    for (auto i = 0; i != s.size(); ++i)
    {
      if (s[i] == '1' && s[i + 1] == '1')
      {
        res = true;
        break;
      }
      res = false;
    }
    return res;
  }
};