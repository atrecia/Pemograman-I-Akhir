a1, a2 = map(int, input().split()); i = int(a1); j = int(a2)
if a1>a2:
    while i>=int(a2) and j<=int(a1):
        print(i, end=' ') ; print(j, end=' ')
        i -= 1 ; j += 1
        if i==int(a2)-1: break
        else: print("-", end=' ')
if a1<a2:
    while i<=int(a2) and j>=int(a1) :
        print(i, end=' ') ; print(j, end=' ')
        i += 1 ; j -= 1
        if j==int(a1)-1 : break
        else: print("-", end=' ')