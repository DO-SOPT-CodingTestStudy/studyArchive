function solution(n, words) {
    let words_said = [];
    let turn_num = new Array(n).fill(0);
    let turn = 0;
    
    for (let i = 0; i < words.length-1; i++) {
        turn = turn % n;
        
        turn_num[turn] += 1;
        turn += 1;
        // 겹치지 않고, 규칙에 맞게 말한 경우
        if (!words_said.includes(words[i+1]) && 
            words[i][(words[i].length -1)] === words[i+1][0]) {
            words_said.push(words[i]);
        }
        // 뒷 인덱스와 비교하기 때문에 틀린 사람 차례는 +1 해야함
        else  {
            let wrong_turn = (turn+1)%n;
            // 횟수는 인덱스로 접근하기때문에 -1 해야함
            // 동일하게 뒷 인덱스와 비교하기 때문에 틀린 사람 차례는 +1
            if (wrong_turn == 0) return [n, turn_num[n-1]+1];
            else return [wrong_turn, turn_num[wrong_turn]+1];
        }
    }
    return [0,0];
}

