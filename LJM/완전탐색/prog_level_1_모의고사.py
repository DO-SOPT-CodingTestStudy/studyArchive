def solution(answers):
    answer = []
    supo1 = [1,2,3,4,5]
    sum1=0
    supo2 = [2,1,2,3,2,4,2,5]
    sum2=0
    supo3 = [3,3,1,1,2,2,4,4,5,5]
    sum3=0
    
    for i in range(len(answers)):
        if answers[i]==supo1[i%len(supo1)]:
            sum1+=1
        if answers[i]==supo2[i%len(supo2)]:
            sum2+=1
        if answers[i]==supo3[i%len(supo3)]:
            sum3+=1
    
    a = [sum1,sum2,sum3]
    
    max_value = max(a)
    
    for i in range(len(a)):
        if max_value == a[i]:
            answer.append(i+1)
    

    return answer