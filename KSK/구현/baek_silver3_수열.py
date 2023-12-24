'''시간 초과 고려 필요한 문제'''
import sys
input = sys.stdin.readline

n,k = map(int,input().split())
arr=list(map(int,input().split()))

result=[]
result.append(sum(arr[:k]))
for i in range(n-k):
    result.append(result[i]-arr[i]+arr[k+i])
    
    
print(max(result))