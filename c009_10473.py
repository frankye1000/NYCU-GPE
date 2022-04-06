''' c009: 10473 - Simple Base Conversion '''

while(1):
    a = input()
    if a.startswith('-'):
        break
    
    # hex2dec
    if a.startswith('0x'):
        print(int(a,16))
    # dec2hex
    else:
        h = hex(int(a))
        h = '0x' + h[2:].upper()
        print(h)
