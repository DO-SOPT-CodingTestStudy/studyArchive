function solution(citations) {
    var answer = 0;
    //citations 내림차순 정렬
    citations.sort((a,b) => b-a);
    for (let i=0; i<citations.length; i++) {
        if (citations[i] > i) {
            answer++;
        }
    }
    return answer;
}