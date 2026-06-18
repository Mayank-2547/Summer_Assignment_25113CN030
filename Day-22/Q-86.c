#include<stdio.h>
#include<string.h>
int main() {
    char str[200];
    int words=0,i;
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++) {
        if((i==0 && str[i]!=' ' && str[i]!='\n') ||
           (str[i]!=' ' && str[i]!='\n' && str[i-1]==' ')) {
            words++;
        }
    }
    printf("Number of words = %d\n", words);
    return 0;
}