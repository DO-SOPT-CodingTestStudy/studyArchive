def solution(number, k):
    answer = ''
     
    stack=[]
    for num in number:
        if len(stack)==0:
            stack.append(num)
            continue
        if k > 0:
            while stack[-1]<num:
                stack.pop()
                k-=1
                if k<=0 or len(stack)==0:
                    break
                
        stack.append(num)
        
    if k>0:
        for _ in range(k):
            stack.pop()
            
    #print(stack)
    return ''.join(stack)