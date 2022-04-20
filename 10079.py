''' c024: 10079 - Pizza Cutting '''
import numpy as np

A = np.zeros((5))
A[0] = 3
A[1] = 9
print(A)

n = 1498
temp = n + A[0]
i = 0
while(temp>=10):
    A[i] = temp%10
    temp //= 10
    i += 1

print(A)