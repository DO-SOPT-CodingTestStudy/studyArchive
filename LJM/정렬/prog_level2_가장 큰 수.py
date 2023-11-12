# 0또는 양의 정수
def solution(numbers):
    answer = ''
    numbers = list(map(str,numbers))
    numbers.sort(reverse=True, key=lambda x:x*3)
    answer = str(int("".join(numbers)))
    # print(numbers[-1])
    return answer