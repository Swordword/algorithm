//
// Created by 张建宇 on 2020/10/2.
//
#include "Cpp/common.h"
#include "Cpp/3.无重复字符的最长子串.cpp"

int main()
{
    Solution Foo;
    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    vector<int> res = Foo.twoSum(nums, target);
    cout << res.size() << endl;
    return 0;
}