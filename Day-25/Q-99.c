#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j;
    printf("Enter the number of names: ");
    scanf("%d",&n);
    printf("Enter the names: ");
    char names[n][100];
    for (int i=0;i<=n;i++){
        fgets(names[i],100,stdin);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n+1;j++){
            if(strcmp(names[i],names[j]) > 0){
                char temp[100];
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    for (int i=0;i<n+1;i++)
        printf("%s",names[i]);
    return 0;
}