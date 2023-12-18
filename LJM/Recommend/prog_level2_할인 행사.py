from collections import Counter

def solution(want, number, discount):
    answer = 0
    num = 0
    wants = list(zip(want,number))
    count = []
    
    for i,dc in enumerate(discount):
        num = 0
        if dc in want:
            count = list(Counter(discount[i:i+10]).items())
            for j in count:
                if j in wants:
                    num +=1
                else: 
                    continue
            if num==len(want):
                answer += 1
            print(num)
            #print(count)
            
            
    #print(wants)
    return answer