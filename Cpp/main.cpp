#include "common.h"

#include "5685. 交替合并字符串.cpp"
int main()
{

  Solution sol;
  string word1{"ab"};
  string word2{"pqrs"};
  string res = sol.mergeAlternately(word1, word2);
  cout << res << endl;
  return 0;
}