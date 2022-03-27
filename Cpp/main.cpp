// #include "common.h";
#include "./5268. 找出两数组的不同.cpp"

int main()
{
  Solution s;
  vector<int> nums1 = {1,2,3};
  vector<int> nums2 = {2, 5, 6};
  vector<vector<int>> answer = s.findDifference(nums1, nums2);
  for (auto vi : answer)
  {
    for (auto i : vi)
    {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}