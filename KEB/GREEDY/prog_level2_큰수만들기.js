function solution(number, k) {
  const stk = [];
  for (let i = 0; i < number.length; i++) {
    const e = number[i];

    while (k > 0 && stk[stk.length - 1] < e) {
      stk.pop();
      k--;
    }
    stk.push(e);
  }
  stk.splice(stk.length - k, k);
  return stk.join("");
}
