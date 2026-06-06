#include <stdio.h>
int main() {
    int n=0,temp=1,r,b;
    printf("Enter a binary number: ");
    scanf("%d",&b);
    while (b>0) {
        r=b%10;
        n+=r*temp;
        temp *= 2;
        b/=10;
    }
    printf("Decimal equivalent = %d\n",n);
    return 0;
}