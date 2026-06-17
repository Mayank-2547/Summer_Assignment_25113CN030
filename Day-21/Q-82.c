#include<stdio.h>
#include<string.h>
int main(){
    char str[100],temp;
    printf("Enter any string: ");
    scanf("%s",str);
    int len=strlen(str)-1,i=0;
    while (i<len){
        temp=str[i];
        str[i]=str[len];
        str[len]=temp;
        i+=1;
        len-=1;
    }
    printf("%s\n",str);
    return 0;
}