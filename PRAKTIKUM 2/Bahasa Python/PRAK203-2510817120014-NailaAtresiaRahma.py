nilai = input().split()

if len(nilai) == 2:
    a, b = map(float, nilai)
    i, j = map(float, input().split())
    x, y = map(float, input().split())
else:
    a, b, i, j, x, y = map(float, nilai)

hasil = ((a - b) * i / j) - (x + y)

print(f"\n{hasil:.3f}")