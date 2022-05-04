'''f711: 12218 - An Industrial Spy'''
'''這方法會timeout'''
from itertools import combinations, permutations

def is_prime(I):
    for i in range(2,I):
        if I%i==0:
            return False
    return True

N = input()
for n in range(int(N)):
    
    a = input()
    L = len(a)
    A = [i for i in a]
    SS = set()

    for i in range(1,L+1):
        comb = combinations(A, i)
        for c in list(comb):
            perm = permutations(c)
            for p in list(perm):
                I = int(''.join(p))
                
                if is_prime(I) and I!=1 and I!=0:
                    SS.add(I)
    print(len(SS))

