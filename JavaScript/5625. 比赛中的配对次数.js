/**
 * @param {number} n
 * @return {number}
 */
var numberOfMatches = function (n) {
  return (function calculate(n, time = 0) {
    if (n === 1) {
      return time
    }
    if (n % 2 === 0) {
      time += n / 2
      return calculate(n / 2, time)
    } else if (n % 2 === 1) {
      time += (n - 1) / 2
      return calculate((n - 1) / 2 + 1, time)
    }
  })(n)
}

console.log(numberOfMatches(14))
