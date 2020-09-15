/**
 * @param {number[]}
 * @return {boolean}
 */

var a = [0, 2, 1, -6, 6, -7, 9, 1, 2, 0, 1];
var b = [0, 2, 1, -6, 6, 7, 9, -1, 2, 0, 1];
var c = [3, 3, 6, 5, -2, 2, 5, 1, -9, 4];

var canThreePartsEqualSum = function(A) {
  let result = false;
  for (let i = 0; i < A.length; i++) {
    for (let j = i + 1; j < A.length; j++) {
      let sumA = countSum(A, -1, i);
      let sumB = countSum(A, i, j);
      let sumC = countSum(A, j, A.length - 1);
      while (sumA == sumB && sumB == sumC) {
        result = true;
        return result;
      }
    }
  }
  return result;
};

function countSum(A, a, b) {
  let sumListNumber = 0;
  for (let start = a + 1; start <= b; start++) {
    sumListNumber += A[start];
  }

  return sumListNumber;
}

console.log(canThreePartsEqualSum(c));
