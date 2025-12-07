r = float(input("Masukkan jari-jari :"))
h = float(input("Masukkan tinggi :"));
v = (22 * pow(r,2) * h)/7
L = (2 * 22 * r * (r + h))/7
K = 2 * 22 *r /7

print("Volume = %.2f" % v)
print("Luas = %.2f" % L)
print("Keliling = %.2f" % K, "\n")