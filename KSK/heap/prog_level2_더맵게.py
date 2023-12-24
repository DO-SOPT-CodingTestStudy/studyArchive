import heapq

def solution(scoville, K):
    answer = -1
    heap=[]
    
    for s in scoville:
        heapq.heappush(heap,s)
       
    
    cnt=0
    if heap[0]>K:
        return 0
        
    while heap[0]<K:
        cnt+=1       
        heapq.heappush(heap,heapq.heappop(heap)+heapq.heappop(heap)*2)
    
        
        if len(heap)==1 and heap[0]<K:
            return -1
    answer = cnt        
    return answer