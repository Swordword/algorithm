/**
 * link https://leetcode-cn.com/contest/biweekly-contest-39/problems/defuse-the-bomb/
 * @param {number[]} code
 * @param {number} k
 * @return {number[]}
 */
var decrypt = function (code, k) {
  let res
  if (k === 0) {
    res = new Array(code.length)
    for (let i = 0; i < res.length; i++) {
      res[i] = 0
    }
    return res
  }
  if (k > 0) {
    res = new Array(code.length)
    for (let i = 0; i < res.length; i++) {
      res[i] = 0
    }
    for (let i = 0, l = res.length; i < l; i++) {
      for (let j = 1; j <= k; j++) {
        res[i] += code[i + j >= l ? i + j - l : i + j]
      }
    }
    return res
  }
  if (k < 0) {
    res = new Array(code.length)
    for (let i = 0; i < res.length; i++) {
      res[i] = 0
    }
    for (let i = 0, l = res.length; i < l; i++) {
      for (let j = k; j < 0; j++) {
        res[i] += code[i + j < 0 ? i + j + l : i + j]
      }
    }
    return res
  }
}
let code = [2, 4, 9, 3],
  k = -2
let test = decrypt(code, k)
console.log(test)
