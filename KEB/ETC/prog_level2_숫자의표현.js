function solution(n) {
  var answer = 0;
  const numArr = new Array(n).fill(0).map((_, index) => index + 1);
  let startIdx = n - 1;
  while (startIdx >= 0) {
    let sum = 0;
    for (let i = startIdx; i >= 0; i--) {
      sum += numArr[i];
      if (sum === n) {
        answer += 1;
      }
      if (sum > n) {
        break;
      }
    }
    startIdx -= 1;
  }
  return answer;
}
