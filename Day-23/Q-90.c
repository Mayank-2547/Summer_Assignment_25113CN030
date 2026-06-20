#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int found=0;
    printf("Enter a string: ");
    scanf("%s", str);
    int len=strlen(str);
    for (int i=0;i<len;i++){
        for (int j=i+1;j<len;j++){
            if (str[i]==str[j]){
                printf("First repeating character: %c\n",str[i]);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }
    if (!found)
        printf("No repeating character found.\n");
    return 0;
}