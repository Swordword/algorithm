/*
 * @lc app=leetcode.cn id=20 lang=javascript
 *
 * [20] 有效的括号
 *
 * https://leetcode-cn.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (38.82%)
 * Likes:    968
 * Dislikes: 0
 * Total Accepted:    105.7K
 * Total Submissions: 269.9K
 * Testcase Example:  '"()"'
 *
 * 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
 * 
 * 有效字符串需满足：
 * 
 * 
 * 左括号必须用相同类型的右括号闭合。
 * 左括号必须以正确的顺序闭合。
 * 
 * 
 * 注意空字符串可被认为是有效字符串。
 * 
 * 示例 1:
 * 
 * 输入: "()"
 * 输出: true
 * 
 * 
 * 示例 2:
 * 
 * 输入: "()[]{}"
 * 输出: true
 * 
 * 
 * 示例 3:
 * 
 * 输入: "(]"
 * 输出: false
 * 
 * 
 * 示例 4:
 * 
 * 输入: "([)]"
 * 输出: false
 * 
 * 
 * 示例 5:
 * 
 * 输入: "{[]}"
 * 输出: true
 * 
 */
/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (str) {
    if (str.length % 2 != 0) {
        return false
    }
    var nStr = '';
    for (let i = 0; i < str.length; i++) {
        const char = str[i];
        if ((char == ')' && nStr[nStr.length - 1] == '(') || (char == ']' && nStr[nStr.length - 1] == '[') || (char == '}' && nStr[nStr.length - 1] == '{')) {
            nStr = nStr.substring(0, nStr.length - 1)
        } else {
            nStr = nStr + char;
        }
    }
    if (nStr.length > 0) {
        return false
    } else {
        return true
    }
};
isValid("()[]{}")

