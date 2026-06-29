#include <stdio.h>

struct Inventory {
    int id;
    char name[50];
    int quantity;
    float price;
};
int main() {
    int n, i;
    printf("Enter number of items: ");
    scanf("%d", &n);
    struct Inventory item[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter Item ID: ");
        scanf("%d", &item[i].id);

        printf("Enter Item Name: ");
        scanf("%s", item[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &item[i].price);
    }
    printf("\n----- Inventory Details -----\n");
    for (i = 0; i < n; i++) {
        printf("\nItem ID: %d", item[i].id);
        printf("\nItem Name: %s", item[i].name);
        printf("\nQuantity: %d", item[i].quantity);
        printf("\nPrice: %.2f\n", item[i].price);
    }
    return 0;
}