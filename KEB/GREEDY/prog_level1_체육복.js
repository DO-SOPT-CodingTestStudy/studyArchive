// [lv.1]

function solution(n, lost, reserve) {
    // n=> 전체 학생수,
    // lost => 체육복을 도난당한 학생들의 번호가 담긴 배열,
    // reserve => 여벌의 체육복을 가지고 있는 학생들의 번호가 담긴 배열

    const clothes = Array(n).fill(1);

    lost.map((lost) => {
        clothes[lost - 1] = 0;
    });

    reserve.map((reserve) => {
        clothes[reserve - 1] += 1;
    });

    for (let i = 0; i < n; i++) {
        // 체육복이 없고, 앞 사람은 체육복 여분이 있을 때
        if (clothes[i] === 0 && clothes[i - 1] === 2) {
            // 체유복이 생겼당
            clothes[i] = 1;
            // 체육복 빌려준 앞 사람은 이제 체육복 하나~
            clothes[i - 1] = 1;
        }

        // 체육복이 없고, 뒷 사람은 체육복 여분이 있을 때
        else if (clothes[i] === 0 && clothes[i + 1] === 2) {
            // 체유복이 생겼당
            clothes[i] = 1;
            // 체육복 빌려준 뒷 사람은 이제 체육복 하나~
            clothes[i + 1] = 1;
        }
    }
    return clothes.filter((c) => c > 0).length;
}