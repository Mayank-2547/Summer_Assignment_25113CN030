#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter any string: ");
    scanf("%s",str);
    int con=0,vow=0;
    int len=strlen(str);
    for (int i=0;i<len;i++){
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            vow+=1;
        else
            con+=1;
    }
    printf("The given string has %d consonants and %d vowels.\n",con,vow);
    return 0;
}