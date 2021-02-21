// https://leetcode-cn.com/contest/weekly-contest-229/problems/merge-strings-alternately/
#include "common.h"

class Solution
{
public:
  string mergeAlternately(string word1, string word2)
  {
    string res;
    auto min_size = min(word1.size(), word2.size());
    for (auto i = 0; i < min_size; i++)
    {
      res.push_back(word1[i]);
      res.push_back(word2[i]);
    }
    if (word1.size() < word2.size())
    {
      for (auto i = min_size; i < word2.size(); i++)
      {
        res.push_back(word2[i]);
      }
    }
    else
    {
      for (auto i = min_size; i < word1.size(); i++)
      {
        res.push_back(word1[i]);
      }
    }
    return res;
  }
};