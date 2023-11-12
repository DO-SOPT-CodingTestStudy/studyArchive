k,n=map(int,input().split())
nums=[]
answer=[]
for _ in range(k):
    num=int(input())
    nums.append(num)

max_num=max(nums)

for j in range(len(nums)):
    answer.append(str(nums[j]))

for i in range(n-k):
    answer.append(str(max_num))

answer.sort(key=lambda x: x*10, reverse=True)
ans=''.join(answer)

print(int(ans))
