#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j;
    printf("Enter the number of names: ");
    scanf("%d",&n);
    printf("Enter the names: ");
    char words[n][100];
    for (int i=0;i<=n;i++){
        fgets(words[i],100,stdin);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n+1;j++){
            if (strlen(words[i]) > strlen(words[j])){
                char temp[100];
                strcpy(temp,words[i]);
                strcpy(words[i],words[j]);
                strcpy(words[j],temp);
            }
        }
    }
    for (int i=0;i<n+1;i++)
        printf("%s",words[i]);
    return 0;
}