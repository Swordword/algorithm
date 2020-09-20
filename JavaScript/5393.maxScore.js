var maxScore = function (cardPoints, k) {
	let max1 = 0,
		max2 = 0
	for (let i = 0; i < k; i++) {
		max1 += cardPoints[i]
	}
	for (let i = cardPoints.length - 1; i > cardPoints.length - k - 1; i--) {
		max2 += cardPoints[i]
	}
	console.log(max1, max2)
	return Math.max(max1, max2)
}
let cardPoints = [100, 40, 17, 9, 73, 75]
let k = 3
maxScore(cardPoints, k)
