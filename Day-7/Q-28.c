#include<stdio.h>
int reverseNum(int x, int rev) {
    if (x == 0)
        return rev;
    return reverseNum(x / 10, rev * 10 + x % 10);
}
int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    int temp = reverseNum(num, 0);
    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", temp);
    return 0;
}