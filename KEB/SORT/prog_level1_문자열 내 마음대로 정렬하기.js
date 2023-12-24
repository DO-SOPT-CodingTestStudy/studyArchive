//level1

function solution(strings, n) {
  // 정렬 함수
  strings.sort(function (a, b) {
    var one = a[n];
    var two = b[n];
    if (one === two) {
      return (a > b) - (a < b);
    } else {
      return (one > two) - (one < two);
    }
  });
  return strings;
}
