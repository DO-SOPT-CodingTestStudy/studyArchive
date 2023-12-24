function solution(brown, yellow) {
    for (let i = 1 ; i<= Math.sqrt(yellow); i++) {
        if (yellow % i === 0) {
            let col = i;
            let row = parseInt(yellow / i)+2;
            if ((row*2 + col * 2) === brown) return [row, col+2];
        };
        
    }
}