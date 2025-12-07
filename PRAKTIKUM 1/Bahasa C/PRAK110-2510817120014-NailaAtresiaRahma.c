#include <stdio.h>
int main (){

    int a,t,m,k,l;
    a =5;
    t =12;
    m = sqrt(pow(a,2)+pow(t,2));
    k = a+t+m;
    l =(a*t)/2;
    printf("diketahui : \n");
    printf("alas = %d cm\n",a);
    printf("tinggi = %d cm\n\n",t);

printf("jawab : \n");
printf("sisi A =%d cm\n",t);
printf("sisi B =%d cm\n",m);
printf("sisi C =%d cm\n",a);
printf("keliling =%d cm\n",k);
printf("luas =%d cm\n",l);
    return 0;
}