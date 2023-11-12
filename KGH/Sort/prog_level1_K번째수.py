def solution(array, commands):
    answer = []
    for i in range(len(commands)) :
        s = commands[i][0]
        e = commands[i][1]
        k = commands[i][2]
        new_array = array[s-1:e]
        new_array.sort()
        num = new_array[k-1]
        new_array.clear()
        answer.append(num)
