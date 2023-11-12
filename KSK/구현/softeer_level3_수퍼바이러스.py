import sys
input=sys.stdin.readline
k,p,n=map(int, input().split())
n=n*10

k=k*pow(p,n,1000000007)%1000000007
print(k)