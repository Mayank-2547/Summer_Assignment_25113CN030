#include<stdio.h>
int main(){
    char str[100];
    int len=0 ,i=0;
    printf("Enter any string: ");
    scanf("%s",str);
    while (str[i] != '\0') {
        len += 1;
        i += 1;
    }
    printf("The size of the given string is %d.",len);
     return 0;
 }
