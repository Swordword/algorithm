//
// Created by 张建宇 on 2020/8/22.
//
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    static string thousandSeparator(int n) {
        int s =n/1000;
        cout<<s<<endl;

    }
};

int main(){
    Solution::thousandSeparator(987);
}
