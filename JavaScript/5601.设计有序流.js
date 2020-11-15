/**
 * link: https://leetcode-cn.com/contest/weekly-contest-215/problems/design-an-ordered-stream/
 * @param {number} n
 */
var OrderedStream = function (n) {
  this.arr = new Array(n)
  this.ptr = 0
}

/**
 * @param {number} id
 * @param {string} value
 * @return {string[]}
 */
OrderedStream.prototype.insert = function (id, value) {
  let res = []
  this.arr[id - 1] = value
  console.log(this.arr)
  for (let i = this.ptr; i < this.arr.length; i++) {
    const element = this.arr[i]
    console.log(element)
    if (element) {
      res.push(element)
      this.ptr = i+1
    } else {
      break
    }
  }
  console.log(res)
  return res
}

/**
 * Your OrderedStream object will be instantiated and called as such:
 * var obj = new OrderedStream(n)
 * var param_1 = obj.insert(id,value)
 */
let os = new OrderedStream(5)
os.insert(3, 'ccccc') // 插入 (3, "ccccc")，返回 []
os.insert(1, 'aaaaa') // 插入 (1, "aaaaa")，返回 ["aaaaa"]
os.insert(2, 'bbbbb') // 插入 (2, "bbbbb")，返回 ["bbbbb", "ccccc"]
// os.insert(5, "eeeee"); // 插入 (5, "eeeee")，返回 []
// os.insert(4, "ddddd"); // 插入 (4, "ddddd")，返回 ["ddddd", "eeeee"]
