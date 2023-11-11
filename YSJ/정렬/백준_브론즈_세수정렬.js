let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let numInput = input[0].split(' ').map(n => Number(n));
let answerArr = numInput.sort((a,b) => a-b);
console.log(answerArr.join(' '));