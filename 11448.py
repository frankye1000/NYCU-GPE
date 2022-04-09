''' a884: 11448 - Crisis '''

n = input()
for i in range(int(n)):
    a, b = input().split(' ')
    print(eval('{} - {}'.format(a,b)))
