#include "common.h"
#include "3.无重复字符的最长子串.cpp"

int main()
{

  Solution foo;

  string s = "abcabcbb";
  int res = foo.lengthOfLongestSubstring(s);
  cout << res << endl;
  return 0;
}