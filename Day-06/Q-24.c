#include <stdio.h>

int main() {
    int x,n,r=1;
    printf("Enter base: ");
    scanf("%d", &x);
    printf("Enter power: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
        r *= x;
    printf("%d^%d=%d\n",x,n,r);
    return 0;
}