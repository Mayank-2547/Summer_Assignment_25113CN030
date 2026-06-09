#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size],odd=0,even=0;
    printf("Enter the elements of the array: ");
    for (int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for (int i=0;i<size;i++){
        if (arr[i]%2==0)
            even+=1;
        else    
            odd+=1;
    }
    printf("Number of odd elements in array is %d.\n",odd);
    printf("NUmber of even elemetns in array is %d.\n",even);
    return 0;
}