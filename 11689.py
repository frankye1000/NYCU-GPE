'''a536: 11689 - Soda Surpler'''

n = input()

for i in range(int(n)):
    s = input()
    d = s.split(' ')
    a = int(d[0]) + int(d[1])
    b = int(d[2])
    c = 0
    r = 0
    while a//b != 0:
        c += a//b
        
        r = a%b
        a = a//b
        
        a = a + r
    print(c)
