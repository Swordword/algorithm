// https://leetcode-cn.com/contest/weekly-contest-272/problems/find-first-palindromic-string-in-the-array/

#include "common.h";

bool IsPalindrome(string str)
{
  auto len = str.length();
  if (str == "")
  {
    return false;
  }
  for (auto i = 0; i < len / 2; i++)
  {
    auto front = str[i];
    auto back = str[len - i - 1];
    if (front != back)
    {
      return false;
    }
  }
  return true;
};

class Solution
{
public:
  string firstPalindrome(vector<string> &words)
  {
    string result = "";
    for (auto i = 0; i < words.size(); i++)
    {
      string str = words[i];
      // 判断是否为回文字符串
      if (IsPalindrome(str))
      {
        if (result.empty())
        {
          result = str;
        }
      }
    }
    return result;
  }
};