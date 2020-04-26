/*
 * @lc app=leetcode.cn id=9 lang=javascript
 *
 * [9] 回文数
 */
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
  var y = x.toString();
  let res = true;
  for (let i = 0; i < y.length; i++) {
    if (y[i] != y[y.length - i - 1]) {
      res = false;
    }
  }
  return res;
};


