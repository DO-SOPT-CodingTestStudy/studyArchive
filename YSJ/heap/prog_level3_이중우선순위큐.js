function solution(operations) {
  let queue = [];
  operations.forEach((opt, idx) => {
    let [cmd, num] = opt.split(' ');
    if (cmd === 'I') {
      queue.push(num);
    } else if (cmd === 'D' && num === '-1') {
      queue.sort((a, b) => a - b);
      queue.shift();
    } else {
      queue.sort((a, b) => a - b);
      queue.pop();
    }
  });
  if (queue.length === 0) {
    return [0, 0];
  } else {
    queue.sort((a, b) => a - b);
    return [+queue.at(-1), +queue[0]];
  }
}
