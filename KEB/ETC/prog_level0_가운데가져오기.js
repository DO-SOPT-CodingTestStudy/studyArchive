function solution(s) {
  const centNum = Math.ceil(s.length / 2);
  return s.length % 2 === 1 ? s[centNum] : s[centNum - 1] + s[centNum];
}
