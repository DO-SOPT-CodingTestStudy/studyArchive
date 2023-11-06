import heapq

heap = []


def solution(scoville, K):
    answer = 0

    for i in scoville:
        heapq.heappush(heap,i)
    #print(heap)
    for i in range(len(heap)):

        if len(heap)<=1 and heap[0]<K:
            return -1

        if(heap[0]>=K):
            return i

        heapq.heappush(heap,heapq.heappop(heap)+(heapq.heappop(heap))*2)

