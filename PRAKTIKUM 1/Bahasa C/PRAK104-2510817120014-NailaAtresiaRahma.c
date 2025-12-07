#include <stdio.h>
int main (){
    float a = 400000;
    float b = 350000;
    float adiskon = 13;
    float bdiskon = 21;
    float akurang = a * adiskon/100;
    float bkurang = b * bdiskon / 100;
    float akhir1 = a - akurang;
    float akhir2 = b - bkurang;
    
    printf("Harga sepatu A adalah %.0f\n", a);
    printf("Harga sepatu B adalah %.0f\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", akhir1);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", akhir2);
    
return 0;
}