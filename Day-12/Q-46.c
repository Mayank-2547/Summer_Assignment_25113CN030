#include<stdio.h>
int isArmstrong(int x) {
    int temp1 = x, l = 0, r, s = 0;
    int temp2 = temp1;
    if (x == 0)
        return 1;
    while (temp1 > 0) {
        temp1 /= 10;
        l++;
    }
    while (x > 0) {
    r = x % 10;
    x /= 10;
    int p = 1;
    for (int i = 0; i < l; i++) {
        p *= r;
    }
    s += p;
}
    return (temp2 == s);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}