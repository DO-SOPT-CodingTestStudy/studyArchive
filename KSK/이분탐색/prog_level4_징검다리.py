def solution(distance, rocks, n):
    answer = 0
    rocks.sort()
    rocks.append(distance)
    
    left = 1
    right = distance
    
    while left<=right:
        mid = (left+right)//2
        delete = 0 # 제거한 바위 개수
        prev_rock = 0 #이전 바위의 위치
        
        for rock in rocks:
            dist = rock - prev_rock
            # 거리가 커트라인 보다 작다면, 바위를 제거
            if dist < mid:
                delete +=1
                if delete > n:
                    break
            else:
                 prev_rock = rock
                    
        if delete > n:
            right = mid-1
        else:
            answer = mid
            left = mid+1

    return answer