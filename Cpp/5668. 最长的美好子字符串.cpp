// https://leetcode-cn.com/contest/biweekly-contest-46/problems/longest-nice-substring/

#include "common.h"
class Solution
{
public:
  bool isLower(char ch)
  {
    return ch >= 'a' && ch <= 'z';
  }

  // 判断字符是否为大写字母
  bool isUpper(char ch)
  {
    return ch >= 'A' && ch <= 'Z';
  }
  // 转换为小写字母
  char toLower(char ch)
  {
    if (ch >= 'A' && ch <= 'Z')
      return ch - 'A' + 'a';
    else
      return ch;
  }

  // 转换为大写字母
  char toUpper(char ch)
  {
    if (ch >= 'a' && ch <= 'z')
      return ch - 'a' + 'A';
    else
      return ch;
  }
  char translate(char c)
  {
    if (isLower(c))
      return toUpper(c);
    else
      return toLower(c);
  }
  string longestCheckStr(string &s)
  {

    for (auto &c : s)
    {
      auto ite = find(s.cbegin(), s.cend(), translate(c));
      if (ite == s.cend())
        return "";
    }
    return s;
  }
  string longestNiceSubstring(string s)
  {
    int n = s.size();
    string res{""};
    for (auto i = 0; i != n; i++)
    {
      for (auto j = i; j != n; j++)
      {

        string tempStr = s.substr(i, j - i + 1);

        string temp = longestCheckStr(tempStr);

        if (temp.size() > res.size())
          res = temp;
      }
    }
    return res;
  }
};