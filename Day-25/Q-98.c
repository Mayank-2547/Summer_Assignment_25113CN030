#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string: ");
    fgets(str2,sizeof(str2),stdin);
    printf("Common character in the given string are: \n");
    for (int i=0;i<strlen(str1);i++){
        for (int j=0;j<strlen(str2);j++){
            if (str1[i]==str2[j]){
                printf("%c ",str2[j]);
                break;
            }
        }
    }
    return 0;
}