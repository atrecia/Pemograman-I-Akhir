a = 400000
b = 350000
adiskon = 13
bdiskon = 21
akurang = a * adiskon/100
bkurang = b * bdiskon / 100
akhir1 = a - akurang
akhir2 = b - bkurang

print(f"Harga sepatu A adalah {a}")
print(f"Harga sepatu B adalah {b}")
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {akhir1:.0f}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {akhir2:.0f}")