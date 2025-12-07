def reverse(nilai):
    sisa, hasil = 0,0

    while nilai != 0 :
        sisa    = nilai % 10
        hasil   = hasil * 10 + sisa
        nilai //= 10
    
    return hasil

A,B = map ( int, input().split() )
A = reverse(A)
B = reverse(B)
C = A+B
print( reverse (C))