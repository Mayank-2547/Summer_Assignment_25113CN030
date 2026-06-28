#include<stdio.h>
struct Bank {
    int account_no;
    char name[100];
    long long phone;
    float balance;
};
int main(){
    int n;
    printf("Enter the number of account holders: ");
    scanf("%d", &n);
    struct Bank b[n];
    for(int i = 0; i < n; i++) {
        printf("\nEnter Account Number: ");
        scanf("%d", &b[i].account_no);
        printf("Enter Account Holder Name: ");
        scanf("%s", b[i].name);
        printf("Enter Phone Number: ");
        scanf("%lld", &b[i].phone);
        printf("Enter Balance: ");
        scanf("%f", &b[i].balance);
    }

    for(int i = 0; i < n; i++) {
        printf("\nAccount Number : %d", b[i].account_no);
        printf("\nName: %s", b[i].name);
        printf("\nPhone Number: %lld", b[i].phone);
        printf("\nBalance: %.2f\n", b[i].balance);
    }
    return 0;
}