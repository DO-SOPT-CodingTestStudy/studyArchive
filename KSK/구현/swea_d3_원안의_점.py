import sys
sys.stdin = open("input.txt", "r")

def solution():

    T = int(input())

    for test_case in range(1, T + 1):
        n=int(input())
        answer=0
        for x in range(-1*n,n+1):
            for y in range(-1*n,n+1):
                if (x*x +y*y)<=n*n:
                    answer+=1

        print("#%d" % test_case, answer)




if __name__ == '__main__':

    solution()

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
