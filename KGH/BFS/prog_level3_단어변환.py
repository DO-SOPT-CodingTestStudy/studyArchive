from collections import deque

def solution(begin, target, words):
    answer = 0
    q = deque()
    q.append([begin, 0])
    V = [ 0 for _ in range(len(words))] 
    while q :
        word, cnt = q.popleft() #처음에는 begin, 0이 pop될 것
        if word == target : #target이랑 word가 같으면 멈추고 지금까지 센 cnt 반환
            answer = cnt 
            break
        for i in range(len(words)) :
            temp = 0
            if not V[i] :
                for j in range(len(word)) :
                    if word[j] != words[i][j] :
                        temp += 1
                if temp == 1 :  #만약 1개의 알파벳만 다르다면 단어 변환이 가능하므로 큐에 넣어줌
                    q.append([words[i], cnt + 1])
                    V[i] = 1
    
