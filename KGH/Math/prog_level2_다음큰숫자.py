def solution(n):
    answer = 0
    num = n+1
    while True : 
        bin_n = bin(n)
        bin_num = bin(num)
        if bin_n.count("1") == bin_num.count("1") :
            answer = num
            break
        else :
            num += 1
    
