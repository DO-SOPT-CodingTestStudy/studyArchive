def solution(numbers):
    answer = [-1] * len(numbers)  # 결과를 저장할 리스트 초기화
    stack = []  # 스택 초기화
    
    for index in range(len(numbers)):  # 주어진 수열을 순회
        target = numbers[index]  # 현재 원소를 타겟으로 설정
        
        while stack and numbers[stack[-1]] < target:
            # 스택이 비어있지 않고, 스택의 가장 위의 원소가 타겟보다 작을 때
            top_index = stack.pop()  # 스택에서 원소를 꺼내고
            answer[top_index] = target  # 해당 인덱스에 대한 결과값을 업데이트
            
        stack.append(index)  # 현재 인덱스를 스택에 추가
        
    return answer 