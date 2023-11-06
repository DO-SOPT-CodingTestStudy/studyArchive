import sys
from itertools import permutations
input=sys.stdin.readline

n,m,k=map(int,input().split())
input_rails = list(map(int,input().split()))

rails_info = permutations(input_rails,n)

result=sys.maxsize

for now_rails in rails_info:
  
  rails =list(now_rails)

  i = 0
  bucket=0
  work=0
  this_all=0

  while work !=k:
    if bucket +rails[i]<=m:
      bucket+= rails[i]
      rails.append(rails[i])
      i+=1
    else:
      this_all+=bucket
      bucket = 0
      work+=1

  result = min(result,this_all)
  
print(result)