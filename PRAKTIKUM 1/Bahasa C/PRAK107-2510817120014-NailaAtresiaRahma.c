#include<stdio.h>
 int main () {
    int a,b,c,x,y,keliling;
    a = 4;
    b = 5;
    c = 7;
    keliling =a+b+c;
    x = 85000;
    y = keliling*x;
    
     printf("Diketahui :\n");
     printf ("Panjang sisi segitiga berturut turut adalah %d, %d, %d\n",a,b,c);
     printf("Keliling tanah pak dengklek adalah %d \n",keliling);
     printf("Harga tanah per meter adalah %d\n",x);
     printf("Jawaban :\n");
     printf("Biaya yang diperlukan pak dengklek adalah %d\n",y);
 return 0;
 }