#include <stdio.h>

int main() {
    float n1, n2, pilih, hasil; char *pilih2;
    for(int i=0;i>=0;i++) {
    in:
    printf("Pilih Program\n 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n 5. Exit\n");
    printf("Masukkan Pilihan: ");
    scanf("%f", &pilih);
    if(pilih>0 && pilih<5) {
    printf("Masukkan nilai pertama: ");
    scanf("%f", &n1);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &n2); 
    if(pilih==1) {
        hasil=n1+n2; pilih2=("penjumlahan"); 
    } else if(pilih==2) {    
        hasil=n1-n2; pilih2=("pengurangan"); 
    } else if(pilih==3) {
        hasil=n1*n2; pilih2=("perkalian"); 
    } else if(pilih==4) {
        hasil=n1/n2; pilih2=("pembagian"); }
    printf("Hasil %s antara %.2f dengan %.2f adalah %.2f \n\n", pilih2, n1, n2, hasil);
    } else if(pilih==5) {
        printf("Terimakasih, telah menggunakan kalkulator NAILA ATRESIA RAHMA.");
        break;
    } else{
        printf("Input anda salah, silahkan coba lagi. \n\n"); goto in; } }
    return 0;
}