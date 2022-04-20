
d = {}
figure = 1
while True:
    s = input()    
    if s != '*':
        l = s.split(' ')
        for i in l:
            if l[0] == 'r':
                d['r', figure] = (float(l[1]),float(l[3]),float(l[4]),float(l[2]))
            else:
                d['c', figure] = (float(l[1]),float(l[2]),float(l[3]))
        figure += 1
    else:
        break

point = 1
while True:
    s = input()
    if s != '9999.9 9999.9':
        l = s.split(' ')
        x = float(l[0])
        y = float(l[1])
        # 比較有沒有在裡面
        g = 1
        for key in d:
            # 比較有沒有在方陣裡
            if key[0]=='r':
                if d[key][0] < x and d[key][1] > x and d[key][2] < y and d[key][3] > y:
                    print('Point {} is contained in figure {}'.format(point, key[1]))
                    g = 0
            # 比較有沒有在圓形裡
            else:
                circle = (d[key][0] - x)**2 + (d[key][1] - y)**2
                if circle <= d[key][2]**2 :
                    print('Point {} is contained in figure {}'.format(point, key[1]))
                    g = 0

        if g==1:
            print('Point {} is not contained in any figure'.format(point))
        point += 1
    else:
        break

    