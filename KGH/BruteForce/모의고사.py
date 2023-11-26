def solution(answers):
    answer = [0, 0, 0]
    p1 = [1, 2, 3, 4, 5]
    p2 = [2, 1, 2, 3, 2, 4, 2, 5]
    p3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    q1, q2, q3 = 0, 0, 0
    for i in range(len(answers)) :
        s1 = i % 5
        s2 = i % 8
        s3 = i % 10
        if p1[s1] == answers[i] :
            answer[0] += 1
        if p2[s2] == answers[i] :
            answer[1] += 1
        if p3[s3] == answers[i] :
            answer[2] += 1
    
    max_num = max(answer)
    res = []
    if max_num == answer[0] :
        res.append(1)
    if max_num == answer[1] :
        res.append(2)
    if max_num == answer[2] :
        res.append(3)
