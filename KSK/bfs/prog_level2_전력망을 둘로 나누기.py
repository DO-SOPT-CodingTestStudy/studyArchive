'''bfs'''
from collections import deque

def solution(n, wires):
    answer = 100000  # 초기 최대 차이값을 큰 값으로 설정
    graph = [[] for _ in range(n+1)]  # 각 노드에 연결된 노드들을 저장할 그래프. 0번 인덱스는 사용하지 않으므로 n+1 크기로 생성.

    # 와이어로 연결된 노드들을 그래프에 양방향으로 추가
    for s, e in wires:
        graph[s].append(e)
        graph[e].append(s)

    # 와이어를 하나씩 끊어보며 두 부분으로 나눠진 트리의 노드 수 차이를 계산
    for node1, node2 in wires:
        visited = [False for _ in range(n + 1)]  # 방문 여부를 확인할 리스트. 모든 노드를 방문할 때마다 초기화.
        q = deque()
        q.append(node1)  # 한 부분의 트리 시작 노드를 큐에 추가
        result = 1  # 현재 부분의 트리에 속한 노드 수
        visited[node1] = True  # 시작 노드 방문 표시
        visited[node2] = True  # 끊긴 노드는 방문 처리하여 다른 부분의 트리에 속하게 함

        # BFS로 한 부분의 트리에 속한 노드 수 계산
        while q:
            node = q.popleft()
            for ele in graph[node]:
                if not visited[ele]:
                    result += 1
                    visited[ele] = True
                    q.append(ele)

        # 두 부분의 트리 노드 수 차이 계산 후 최소 차이값 업데이트
        min_value = min(result, n-result)
        max_value = n - min_value
        if answer > max_value - min_value:
            answer = max_value - min_value

    return answer  # 최소 차이값 반환



'''dfs'''
from collections import deque

def solution(n, wires):
    answer = 100000
    
    체크 = [[1]*(n+1) for _ in range(n+1)]
    
    graph=[[] for _ in range(n+1)]

    for a,b in wires:
        graph[a].append(b)
        graph[b].append(a)
        

    def dfs(x):
        cnt=1
        visited[x]=1
        for i in graph[x]:
            if visited[i] == 0 and 체크[x][i]:
                cnt+=dfs(i)
        return cnt
        
    for a, b in wires:
        visited = [0]*(n+1)
        체크[a][b] = 0 #ab 간선 끊기
        cnt_a = dfs(a)
        cnt_b = dfs(b)
        체크[a][b] =1 #다시 연결
        
        answer = min(answer, abs(cnt_a-cnt_b))
    
    
    return answer  