def solution(brown, yellow):
    S = brown + yellow
    for width in range(1, S + 1) :
        if (S / width) % 1 == 0 :
            height = S / width
            if height >= width :
                if height*2 + width*2 == brown + 4 :
