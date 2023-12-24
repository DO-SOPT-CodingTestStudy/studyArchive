let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let n = Number(input[0]);
let arr = [];

for (let i = 1; i<=n; i++) {
    arr.push(Number(input[i]));
}

let sortedArr = arr.sort((a,b) => a-b);
sortedArr.forEach(num => console.log(num));