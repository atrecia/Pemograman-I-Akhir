#include <stdio.h> 
#include <math.h>

int hitung(int nilai1, int nilai2){
//Lengkapi Function ini
    int x = abs(nilai1 - nilai2);
    return x;
}
int mutlak(int angka){
    //Lengkapi Function ini
    int y = abs(angka);
    return y;
}
int main()
{ 
    int a,b,c,d,Hasil;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    Hasil = hitung(a,b) + hitung(c,d); 
    printf("%d",mutlak(Hasil));
    return 0;
}