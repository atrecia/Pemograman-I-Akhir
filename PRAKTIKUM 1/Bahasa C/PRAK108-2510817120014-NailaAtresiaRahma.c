#include <stdio.h>
int main (){
    float phi,putaran,jarak,keliling,jari;
    phi = 3.14;
    putaran = 5;
    jarak = 14 ;
    keliling = jarak/putaran;
    jari = keliling/(2*phi);
 
   printf ("Diketahui :\nPak Dengklek mengelilingi taman = %.f Putaran\n",putaran);
   printf ("Jarak tempuh Pak Dengklek = %.f Kilometer\n",jarak);
   printf ("Jawaban :\nJari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari);

}