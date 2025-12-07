#include <stdio.h>

int main(){

    int n,kelipatan, hasil,hasil2,total;
    hasil = hasil2 = total = 0;
    scanf("%d %d", &n, &kelipatan);
    for(int i=1;i<=n;i++) {
        for(int j=i;j>=1;j--) {
            printf("(%d * %d) ",j,kelipatan);
            if (j>1){
                printf(" + ");
    }
    }
        hasil = (i*kelipatan);
        hasil2 += hasil;
        printf (" = %d",hasil2);
        total+= hasil2;
        printf("\n");
    }
    printf("%d",total);
    return 0;
}