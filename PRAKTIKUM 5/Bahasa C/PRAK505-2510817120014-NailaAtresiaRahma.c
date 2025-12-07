#include <stdio.h>
void Biodata( int a,char* b,char* c) {
    // Lengkapi Function ini
int tahun_sekarang = 2020, umur=tahun_sekarang-a;
printf("Perkenalkan Nama Saya : %s \nUmur Saya : %d \nSaya Adalah Angkatan : %d \nAsal Saya dari : %s", b, umur, tahun_sekarang, c);
}
int main() {
int tahunLahir; char Namaku[20], Asal[15];
scanf(" %d",&tahunLahir); 
scanf(" %[^\n]%*c",&Namaku);
scanf(" %[^\n]%*c",&Asal); 
Biodata(tahunLahir, Namaku, Asal); 
return 0;
}