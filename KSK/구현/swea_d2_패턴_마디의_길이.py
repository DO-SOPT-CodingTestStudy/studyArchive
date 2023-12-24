import sys
sys.stdin = open("input.txt", "r")

def solution():
   
    T = int(input())

    for test_case in range(1, T + 1):
        a=int(input())
        answer=0
        for i in range(1,a+1):
            if i % 2==0:
                answer-=i
            else:
                answer+=i
        print("#%d" % test_case, answer)


if __name__ == '__main__':

    solution()
