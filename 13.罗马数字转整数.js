/*
 * @lc app=leetcode.cn id=13 lang=javascript
 *
 * [13] 罗马数字转整数
 */
/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
  let config = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000
  };
  let amount = 0;
  for (let i = 0; i < s.length; i++) {
    const element = s[i];
    console.log(config[element]);
    amount += config[element];
  }
  console.log(amount);
  return amount
};

romanToInt("IV");
