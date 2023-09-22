//

#include "common.h"

// 复制 class Solution {}

class Solution
{
public:
  int countWays(vector<int> &nums)
  {
    unordered_map<int, int> cnt;
    for (int num : nums)
    {
      cnt[num]++;
    }
    int n = nums.size();
    long long res = 0;
    long long pre_sum = 0, suf_sum = accumulate(nums.begin(), nums.end(), 0LL);
    for (int i = 0; i < n; i++)
    {
      suf_sum -= nums[i];
      int less = pre_sum, more = suf_sum;
      if (cnt.count(nums[i] - 1))
        less -= cnt[nums[i] - 1];
      if (cnt.count(nums[i] + 1))
        more -= cnt[nums[i] + 1];
      if (less > more)
      {
        res += less - more;
      }
      pre_sum += nums[i];
      cnt[nums[i]]--;
    }
    return res % int(1e9 + 7);
  }
};

int main()
{
  Solution s;
  vector<int> nums{6, 0, 3, 3, 6, 7, 2, 7};
  // vector<int> nums{1, 1};
  auto res = s.countWays(nums);
  cout << res << endl;
  return 0;
}