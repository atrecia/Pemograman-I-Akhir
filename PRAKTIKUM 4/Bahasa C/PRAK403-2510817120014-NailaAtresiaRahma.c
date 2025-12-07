#include <stdio.h>

int main() {
int a1, a2;
scanf("%d %d", &a1, &a2);
if(a1<a2) {
for(int i=a1;i<=a2;a1++,a2--) {
    printf("%d %d ", a1, a2);
    if(i<a2) {
        printf("- ");}}
        } else if(a1>a2) {
for(int i=a2;i<=a1;a2++,a1--) {
    printf("%d %d ", a1, a2);
    if(i<a1) {
        printf("- ");}}}
    return 0;
}