def hitung(nilai1, nilai2):
    x=abs(nilai1-nilai2)
    return x
def mutlak(angka):
    y=abs(angka)
    return y
a,c,b,d=map(int, input().split())
Hasil=hitung(a,b) + hitung(c,d)
print("%d"%mutlak(Hasil))