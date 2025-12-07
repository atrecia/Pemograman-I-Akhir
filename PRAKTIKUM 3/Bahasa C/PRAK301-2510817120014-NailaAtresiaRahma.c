#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    if (a < b && b < c)
    {
        printf("%d %d %d", a,b,c);
    }
    else if (a > b && b > c)
    {
        printf("%d %d %d",c,b,a);
    }
    else if (a < b && b > c)
    {
        printf("%d %d %d",a,c,b);
    }
    else{
        printf("%d %d %d", b, c, a);
    }
return 0;
}