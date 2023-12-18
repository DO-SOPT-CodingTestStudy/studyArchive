def solution(n, times):
    answer = 0
    
    start = min(times)
    end = max(times)*n
    
    while start <= end:
        people = 0
        mid = (start+end)//2
        
        for i in times:
            people += mid//i

            if n<=people:
                break

        if n<=people:
            answer = mid
            end = mid -1
        else:
            start = mid +1

    
    
    return answer