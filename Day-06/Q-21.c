#include<stdio.h>
int main() {
    int num,temp,i=0,bin[32];
    printf("Enter the number to be converted: ");
    scanf("%d", &num);
    if (num == 0) 
        printf("Given number in binary is 0");
    else {
        int original = num;
        while (num > 0) {
            temp = num % 2;
            bin[i] = temp;
            i++;
            num /= 2;
        }
        printf("Given integer number %d in binary is: ", original);
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", bin[j]);
        }
    }
    return 0;
}