import sys
import heapq
input = sys.stdin.readline

n = int(input())
ans = 0
now = 0
arr =[]
for _ in range(n):
  a,b = map(int,input().split())
  heapq.heappush(arr,(b,a))
  while arr:
    a,b = heapq.heappop(arr)
    if b>=now:
      now = a
      ans+=1
print(ans)
