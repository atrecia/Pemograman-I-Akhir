#include <stdio.h>
int main()
{
    char nama[50], nim[50], tempat[50], hari[50], bulan[50],
    tahun[50], hobi[50], alamat [50], hp[50], paralel[50] , tempat_tanggal_lahir[100];
    printf ("Nama                 : ");
    fgets(nama, 50, stdin);
    printf ("NIM                  : ");
    fgets(nim, 50, stdin);
    printf ("Kelas Paralel        : ");
    fgets(paralel, 50 , stdin);
    printf ("Tempat/Tanggal Lahir : ");
    fgets (tempat_tanggal_lahir, 100, stdin);

    printf ("Alamat               : ");
    fgets(alamat, 50, stdin);
    printf ("Hobby                : ");
    fgets (hobi, 50, stdin);
    printf ("No. Hp               : ");
    fgets (hp, 50, stdin);
    printf ("\n");
    printf ("Nama                 : %s\n", nama);
    printf ("NIM                  : %s\n", nim);
    printf ("Kelas Paralel : %s\n", paralel);
    printf ("Tempat/Tanggal Lahir : %s\n", tempat_tanggal_lahir);
    printf ("Alamat               : %s\n", alamat);
    printf ("Hobby                : %s\n", hobi);
    printf ("No. Hp               : %s\n", hp);
return 0;
}