'''a538: 11879 - Multiple of 17'''

while True:
    temp = 0
    a = input()
    if a == '0':
        break

    for i in range(len(a)):
        temp = temp + int(a[i])
        l = temp % 17
        temp = l*10

    if temp%17!=0:
        print(0)
    else:
        print(1)