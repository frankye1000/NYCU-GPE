'''a737: 10041 - Vito's family'''
import sys
n = input()

for i in range(int(n)):
    s = input()
    n = int(s.split(' ')[0])
    listt = s.split(' ')[1:]
    listt = sorted([int(k) for k in listt])
    
    half  = n//2
    a = listt[half]
    b = listt[half-1]

    tempa = 0
    tempb = 0
    for j in listt:
        tempa += abs(a-j)
        tempb += abs(b-j)

    print(min(tempa, tempb))
    