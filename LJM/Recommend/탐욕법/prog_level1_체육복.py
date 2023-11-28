def solution(n, lost, reserve):
    answer = 0
    reserve.sort(reverse=True)
    for i,num in enumerate(lost):
        if num in reserve:
            reserve.remove(num)
            lost.remove(num)
            #answer+=1
            
        elif (num+1) in reserve:
            reserve.remove(num+1)
            answer+=1
        elif (num-1) in reserve:
            reserve.remove(num-1)
            answer+=1
            
    answer = n-len(lost)+answer
    print(answer)
    return answer
