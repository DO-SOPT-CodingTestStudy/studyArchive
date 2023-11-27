def solution(food):
    answer = ''
    for i in range(1,len(food)):
        answer += str(i)*(int(food[i])//2)
    add = answer[::-1]
    answer += "0"+add
    return answer