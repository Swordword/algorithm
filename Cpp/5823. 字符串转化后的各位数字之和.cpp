// https://leetcode-cn.com/contest/weekly-contest-251/problems/sum-of-digits-of-string-after-convert/
#include "common.h"

void reverse(string &numbers, int &res)
{
  string cacheNumbers = numbers;
  res = 0;
  for (auto &&i : cacheNumbers)
  {
    res += i - 48;
  }
  numbers = "";
  for (auto &&i : to_string(res))
  {
    numbers.append(to_string(i - 48));
  }
}

class Solution
{
public:
  int getLucky(string s, int k)
  {
    string numbers = "";
    for (auto &&i : s)
    {
      numbers.append(to_string(toascii(i) - 96));
    }
    int res = 0;

    for (int i = 0; i < k; i++)
    {
      reverse(numbers, res);
    }
    return res;
  }
};