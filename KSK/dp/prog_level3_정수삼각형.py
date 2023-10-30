def solution(triangle):
    answer = 0
    floor=len(triangle) - 1 #N층의 인덱스
    while floor > 0:
        for i in range(floor):
            triangle[floor-1][i] += max(triangle[floor][i],triangle[floor][i+1])       
        floor-=1
    answer = triangle[0][0]
    
    return answer