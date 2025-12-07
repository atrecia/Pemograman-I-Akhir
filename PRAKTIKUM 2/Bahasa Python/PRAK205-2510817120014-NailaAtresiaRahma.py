import math
Tinggi = int(input("Masukkan Sisi A: "))
Miring = int(input("Masukkan Sisi B: "))
Alas = math.sqrt(pow(Miring, 2) - pow(Tinggi,2))
Keliling = Alas + Miring + Tinggi
Luas = Alas * Tinggi / 2
print("Alas: %d cm"%Alas)
print("Tinggi: %d cm"%Tinggi)
print("Keliling: %d cm"%Keliling)
print("Luas: %d cm^2"%Luas)
