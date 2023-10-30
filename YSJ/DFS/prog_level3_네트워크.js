function solution(n, computers) {
    let visited = [];
    let answer = 0;
    for (let i = 0; i<n; i++) {
        if (!visited[i]) {
            // 탐색
            dfs(i, visited, computers);
            answer += 1;
        }
    }
    return answer;
}

function dfs(node, visited, computers) {
    visited[node] = true;
    for (let j = 0; j < computers.length; j++) {
        if (computers[node][j] === 1 && !visited[j]) {
            dfs(j, visited, computers);
        }
    }
}