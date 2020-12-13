/**
 * @param {string} n
 * @return {number}
 */
var minPartitions = function (n) {
  return Math.max(...n.split('').map((i) => Number(i)))
}

console.log(minPartitions('27346209830709182346'))
