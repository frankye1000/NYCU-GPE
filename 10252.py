'''e507: 10252 - Common Permutation'''

while True:
    try:
        s = input()
        t = input()
        A = [0 for _ in range(26)]
        B = [0 for _ in range(26)]
        for a in s:
            A[ord(a)-97] += 1
        for b in t:
            B[ord(b)-97] += 1

        r = ''
        for i in range(26):
            r+=(chr(i+97)*min(A[i],B[i]))
        print(r)

    except:
        break