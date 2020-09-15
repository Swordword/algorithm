/**
 * @param {number[]} target
 * @param {number} n
 * @return {string[]}
 */
var buildArray = function (target, n) {
    n = target[target.length - 1]
    console.log(target, n)
    let res = []
    for (let i = 1; i <= n; i++) {
        if (target.includes(i)) {
            res.push('Push')
        } else {
            res.push("Push", "Pop")
        }
    }
    
    return res
};

var target = [2, 3], n = 4;
buildArray(target, n)