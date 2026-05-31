#include <stdio.h>
#include <math.h>
int main() {
    int s,e, i;
    printf("Enter the lower bound of the range: ");
    scanf("%d", &s);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &e);
    printf("Armstrong numbers between %d and %d are:\n", s, e);
    for (i = s; i <= e; i++) {
        int temp = i;
        int digits = 0;
        double result = 0.0;
        while (temp != 0) {
            temp /= 10;
            digits++;
        }
        temp = i;
        while (temp != 0) {
            int remainder = temp % 10;
            result += round(pow(remainder, digits));
            temp /= 10;
        }
        if ((int)result == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}