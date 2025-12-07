while True:
    print("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    pilih = int(input("Masukkan Pilihan: "))
    if pilih == 5:
        print("Terimakasih, telah menggunakan kalkulator NAILA ATRESIA RAHMA")
        break
    elif pilih>5 or pilih<=0:    
        print("Input anda salah, silahkan coba lagi\n")
        continue
    else:
        n1 = float(input("Masukkan nilai pertama: "))
        n2 = float(input("Masukkan nilai kedua: "))
        if pilih == 1:
            hasil=n1+n2; pilih2=("penjumlahan")
        elif pilih == 2:
            hasil=n1-n2; pilih2=("pengurangan")
        elif pilih == 3:
            hasil=n1*n2; pilih2=("perkalian")
        elif pilih == 4:
            hasil=n1/n2; pilih2=("pembagian")
    print("Hasil %s antara %.2f dengan %.2f adalah %.2f \n"%(pilih2, n1, n2, hasil))