/**
 * @param {string} s
 * @return {number}
 */
var maxScore = function (s) {
	let arr = s.split('')
	let max = 0
	for (let i = 1; i < arr.length ; i++) {
		let arrL = arr.slice(0, i)
		let arrR = arr.slice(i)
		const newMax =
			arrL.filter((item) => {
				return item == '0'
			}).length +
			arrR.filter((item) => {
				return item == '1'
			}).length
	
		max = newMax > max ? newMax : max
  }
  console.log(max)
	return max
}
maxScore('11')
