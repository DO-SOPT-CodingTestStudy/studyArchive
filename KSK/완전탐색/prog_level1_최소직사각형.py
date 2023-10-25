def solution(sizes):
    answer = 0
    b=[]
    s=[]
    
    for size in sizes:
        if size[1]>size[0]:
            b.append(size[1])
            s.append(size[0])
        else:
            b.append(size[0])
            s.append(size[1])
    
    answer = max(b)*max(s)
    
    return answer