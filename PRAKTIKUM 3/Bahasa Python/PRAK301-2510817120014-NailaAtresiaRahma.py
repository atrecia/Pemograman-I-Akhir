a = int(input(""))
b = int(input(""))
c = int(input(""))

if a < b and b < c:
    print(a,b,c)
elif a > b and b > c:
    print(c,b,a)
elif a < b and b > c:
    print(a,c,b)
else:
    print(b, c, a)