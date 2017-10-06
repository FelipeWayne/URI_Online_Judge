s = float(input())
if s <= 400:
    p = (s * 15) / 100
    t = s + p
    print('Novo salario: {:.2f}'.format(t))
    print('Reajuste ganho: {:.2f}'.format(p))
    print('Em percentual: 15 %')
elif s > 400 and s <= 800:
    p = (s * 12) / 100
    t = s + p
    print('Novo salario: {:.2f}'.format(t))
    print('Reajuste ganho: {:.2f}'.format(p))
    print('Em percentual: 12 %')
elif s > 800 and s <= 1200:
    p = (s * 10) / 100
    t = s + p
    print('Novo salario: {:.2f}'.format(t))
    print('Reajuste ganho: {:.2f}'.format(p))
    print('Em percentual: 10 %')
elif s > 1200 and s <= 2000:
    p = (s * 7) / 100
    t = s + p
    print('Novo salario: {:.2f}'.format(t))
    print('Reajuste ganho: {:.2f}'.format(p))
    print('Em percentual: 7 %')
elif s > 2000:
    p = (s * 4) / 100
    t = s + p
    print('Novo salario: {:.2f}'.format(t))
    print('Reajuste ganho: {:.2f}'.format(p))
    print('Em percentual: 4 %')
