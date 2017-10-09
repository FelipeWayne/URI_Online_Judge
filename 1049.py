h = str(input())
m = str(input())
x = str(input())

if (h == 'vertebrado'):
    if(m == 'ave'):
        if(x == 'carnivoro'):
            print('aguia')
        else:
            print('pomba')
    else:
        if(x == 'onivoro'):
            print('homem')
        else:
            print('vaca')
else:
    if(m == 'inseto'):
        if(x == 'hematofago'):
            print('pulga')
        else:
            print('lagarta')
    else:
        if(x == 'hematofago'):
            print('sanguessuga')
        else:
            print('minhoca')
