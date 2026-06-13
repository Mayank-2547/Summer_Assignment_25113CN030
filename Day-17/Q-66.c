#include<stdio.h>
int main(){
    int size1,size2;

    printf("Enter size of first array: ");
    scanf("%d",&size1);

    printf("Enter size of second array: ");
    scanf("%d",&size2);

    int arr1[size1],arr2[size2];

    printf("Enter elements of first array:");
    for (int i=0;i<size1;i++)
        scanf("%d",&arr1[i]);

    printf("Enter elements of second array:\n");
    for (int i=0;i<size2;i++)
        scanf("%d",&arr2[i]);

    int unionArr[size1+size2];
    int k=0;

    for (int i=0;i<size1;i++)
        unionArr[k++]=arr1[i];

    for (int i=0;i<size2;i++) {
        int found=0;
        for (int j=0;j<k;j++) {
            if (arr2[i]==unionArr[j]) {
                found=1;
                break;
            }
        }
        if (!found)
            unionArr[k++]=arr2[i];
    }
    
    printf("Union of arrays: ");
    for (int i=0;i<k;i++)
        printf("%d ",unionArr[i]);

    return 0;
}