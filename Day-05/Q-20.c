#include <stdio.h>
int is_prime(int x){
    if (x < 2)
        return 0;
    for (int i = 2; i * i <= x; i++) { 
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main(){
    int num, largest = -1;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (num<=0){
        printf("Invalid input");
        return 0;
    }
    for (int i = 2; i <= num; i++){
        if (num % i == 0 && is_prime(i)){
            largest = i;
        }
    }
    if (largest != -1){
        printf("Largest prime factor of given number is %d.", largest);
    } 
    else{
        printf("No prime factors found.");
    }
    return 0;
}