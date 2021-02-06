#include "common.h"

class Solution
{
public:
  void println(vector<int> &nums)
  {
    for (auto &i : nums)
    {
      cout << i << " ";
    }
    cout << endl;
  }
  int sumOfUnique(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    for (auto begin = nums.begin(); begin != nums.end(); begin++)
    {
      
    }

    println(nums);
    return accumulate(nums.begin(), nums.end(), 0);
  }
};