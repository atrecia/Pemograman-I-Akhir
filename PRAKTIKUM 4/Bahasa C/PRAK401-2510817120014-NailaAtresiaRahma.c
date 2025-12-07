#include <stdio.h>

int main() {

int angka; char simbol;
scanf("%d %c", &angka, &simbol);
for(int i=1; i<=50; i++) {
    if(i % angka) {
        printf("%d ", i);
    } else {
        printf("%c ", simbol); }
}
    return 0;
}