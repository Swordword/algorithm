/*
 * @lc app=leetcode.cn id=67 lang=javascript
 *
 * [67] 二进制求和
 *
 * https://leetcode-cn.com/problems/add-binary/description/
 *
 * algorithms
 * Easy (49.42%)
 * Likes:    245
 * Dislikes: 0
 * Total Accepted:    39.5K
 * Total Submissions: 78K
 * Testcase Example:  '"11"\n"1"'
 *
 * 给定两个二进制字符串，返回他们的和（用二进制表示）。
 * 
 * 输入为非空字符串且只包含数字 1 和 0。
 * 
 * 示例 1:
 * 
 * 输入: a = "11", b = "1"
 * 输出: "100"
 * 
 * 示例 2:
 * 
 * 输入: a = "1010", b = "1011"
 * 输出: "10101"
 * 
 */
/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
    let result = '';
    let carry = 0;
    while (a.length || b.length) {
        var charA = a.substr(a.length - 1);
        var charB = b.substr(b.length - 1);
        if (carry + charA * 1 + charB * 1 > 1) {
            result = result.concat((carry + charA * 1 + charB * 1) % 2)
            carry = 1;
        } else {
            result = result.concat(carry + charA * 1 + charB * 1)
            carry = 0;
        }
        a = a.substr(0, a.length - 1)
        b = b.substr(0, b.length - 1)
    }
    return carry ? result.concat(carry).split("").reverse().join("") : result.split("").reverse().join("")
};

