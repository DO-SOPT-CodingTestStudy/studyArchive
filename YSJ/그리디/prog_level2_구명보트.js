function solution(people, limit) {
    people.sort((a,b) => b-a);
    let answer = 0;
    for (let i = 0, j = people.length - 1; i <= j; i++, answer++) {
        if (people[i] + people[j] <= limit) j--;
    }
    return answer;
}