h = int(input())
n = int(input())
if h > n:
    t = (24 - h) + n
elif h == n:
        t = 24
elif n > h:
    t = n - h
print('O JOGO DUROU {} HORA(S)'.format(t))
