angka, simbol = input().split()
a = int(angka)
for x in range(1,51):
    if (x%a==0):
        print(simbol, end=' ') 
    else:
        print(x, end=' ')