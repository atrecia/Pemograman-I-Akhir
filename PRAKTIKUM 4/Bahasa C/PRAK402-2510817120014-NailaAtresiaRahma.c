#include <stdio.h>

int main() {

int input;
scanf("%d", &input);
for(int i=1; i<=input; i++) {
    if(i % 2==1) {
        printf("%d ", i); }
}   printf("\n");
for(int i=input; i>0; i--) {
    if(i % 2==0) {
        printf("%d ", i); }
}
    return 0;
}