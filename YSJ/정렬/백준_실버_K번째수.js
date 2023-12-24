let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

const [num, idx] = input[0].split(' ').map(Number);
let arr = input[1].split(' ').map(Number);
arr.sort((a,b) => a-b);
console.log(arr[idx-1]);