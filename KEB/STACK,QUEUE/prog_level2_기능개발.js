// [Lv.2]

function solution(progresses, speeds) {
    var answer = [];
    let days = [];

    for(let i = 0; i<progresses.length; i++) {
        // 남은 작업량 / 하루 작업량 = 배포까지 걸리는 일
        let day = Math.ceil((100 - progresses[i]) / speeds[i]);
        days.push(day);
    }
    let max = days[0];

    let count = 1;
    for(let i = 1; i<days.length; i++) {
        if(max >= days[i]) {
            count++;
        } else {
            answer.push(count);
            max = days[i];
            count = 1;
        }
    }
    answer.push(count);
    return answer;
}
