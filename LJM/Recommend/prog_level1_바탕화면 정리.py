def solution(s):
    answer = 0
    a = s.split()
    for i, aList in enumerate(a):
        
        if(aList=="Z"):
            answer -= int(a[i-1])
        else:
            answer += int(aList)
    
    return answer


s = "1 2 Z 3"
print(solution(s))