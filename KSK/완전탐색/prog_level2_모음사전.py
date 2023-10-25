from itertools import product
def solution(word):
    answer = 0
    
    모음 = ['A', 'E', 'I', 'O', 'U']
    사전 = []
    
    for i in range(1,6):
        for x in product(모음,repeat=i):
            x=''.join(x)
            사전.append(x)
    사전.sort()
    answer=사전.index(word)+1  
    
    return answer