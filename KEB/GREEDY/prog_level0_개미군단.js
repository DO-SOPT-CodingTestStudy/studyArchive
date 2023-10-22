// [Lv.0]

function solution(hp) {
  let j = Math.floor(hp / 5);
  let b = Math.floor((hp - j * 5) / 3);
  let i = hp - j * 5 - b * 3;
  return j + b + i;
}
