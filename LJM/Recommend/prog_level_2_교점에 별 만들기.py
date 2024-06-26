def solution(line):
    answer = []
    points = []
    integers = []
    
    for i in range(len(line)):
        for j in range(i+1, len(line)):
            a,b,e = line[i]
            c,d,f = line[j]  
            if (a*d-b*c)==0:
                continue                
            x = (b*f-e*d) / (a*d-b*c)
            y = (e*c-a*f) / (a*d-b*c)
            points.append([x,y])
            
    for i in points:
        if i[0].is_integer() and i[1].is_integer():
            i[0] = int(i[0])
            i[1] = int(i[1])
            integers.append(i)

    
    row_max = max((zip(*integers))[0])
    row_min = min(list(zip(*integers))[0])
    col_max = max(list(zip(*integers))[1])
    col_min= min(list(zip(*integers))[1])
            
    arr = [["." for j in range(int(row_max-row_min)+1)] for i in range(int(col_max-col_min)+1)]


    for i in integers:
        x = i[0] - row_min
        y = col_max - i[1]
        arr[y][x] = '*'

    
    for i in arr:
        answer.append(''.join(i))
        
    return answer