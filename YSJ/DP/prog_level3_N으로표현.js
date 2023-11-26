function solution(N, number) {
    const memo = Array.from({length: 9}, () => new Set());
    if (N === number) return 1;
    memo.forEach((sets, i) => {
        if (i !== 0) sets.add(Number(String(N).repeat(i)));
    });
    for (let i = 1; i < 9; i++) {
        for (let j = 1; j < i; j++) {
            for (const origin of memo[j]) {
                for (const value of memo[i - j]) {
                    memo[i].add(origin + value);
                    memo[i].add(origin - value);
                    memo[i].add(origin * value);
                    memo[i].add(origin / value);
                }
            }
        }
        if (memo[i].has(number)) return i;
    }
    return -1;
}