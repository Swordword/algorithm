/**
 * @param {number[]} students
 * @param {number[]} sandwiches
 * @return {number}
 */
var countStudents = function (students, sandwiches) {
  if (
    students.filter((s) => s === 1).length ===
    sandwiches.filter((s) => s === 1).length
  ) {
    return 0
  }
  let len = students.length,
    idx = 0
  while (idx < len) {
    if (students[0] === sandwiches[0]) {
      students = students.slice(1)
      console.log(students)
      sandwiches = sandwiches.slice(1)
      console.log(sandwiches)
      --len
      idx = 0
    } else {
      students.push(students[0])
      students = students.slice(1)
      ++idx
    }
  }
  console.log(students)
  return students.length
}
const students = [1, 1, 1, 1, 0, 1],
  sandwiches = [1, 1, 0, 0, 1, 1]
let res = countStudents(students, sandwiches)
console.log(res)
