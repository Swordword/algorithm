/*
 * @lc app=leetcode.cn id=7 lang=javascript
 *
 * [7] 整数反转
 */
/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    x=x.toString()
    var str=x.split("").reverse().join("")
    str = parseInt(str)
    if(str>2**31-1) return 0
    return x < 0 ? -str:str;
};
reverse(123);
