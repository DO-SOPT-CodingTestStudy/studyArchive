function solution(n, s) { 
    // 최대 시작
    const maxStart = Math.floor(s / n); 
    
    // 못 만드는 경우
    if (!maxStart) return [-1];
    
    const rest = s % n; 
    const answer = new Array(n).fill(maxStart); 
    
    // 남은 값 뒤에서부터 1씩 더해주기
    for (let i = 0; i<rest; i++) {
        answer[answer.length -1 -i]++;
    }
    return answer;
}