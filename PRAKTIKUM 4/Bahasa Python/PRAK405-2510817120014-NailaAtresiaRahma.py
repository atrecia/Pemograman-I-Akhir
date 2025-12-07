n,kelipatan = input().split(); n = int(n); kelipatan = int(kelipatan)

hasil1 = 0; hasil2 = 0; total = 0
i = 0
while i < n :
    i += 1
    j = i
    if i == 0:
        break
    while j > 0 :
        j -= 1
        print("(%d * %d)" %(j+1,kelipatan), end=" ")
        if(j > 0) :
            print(" + ", end=" ")
    hl = i * kelipatan
    hasil2 += hl
    print("= %d" %(hasil2))
    total += hasil2
print ("%d" %(total))