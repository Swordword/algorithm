var points1 = [[1, 1], [2, 3], [3, 2]];
var points2 = [[1, 1], [2, 2], [3, 3]];
var points3 = [[0, 0], [1, 1], [1, 1]];
var points4 = [[1, 0], [1, 1], [1, 0]];

var isBoomerang = function(points) {
  var tan1 = (points[1][1] - points[0][1]) / (points[1][0] - points[0][0]);
  var tan2 = (points[2][1] - points[1][1]) / (points[2][0] - points[1][0]);
  var tan3 = (points[2][1] - points[0][1]) / (points[2][0] - points[0][0]);

  console.log(tan1, tan2, tan3, points[1][1]);
  if (!isNaN(tan2) && !isNaN(tan1) && !isNaN(tan3) && tan1 != tan2) {
    return true;
  } else {
    return false;
  }
};
console.log(isBoomerang(points4));
