#include<stdio.h>
struct Ticket {
    int ticket_no;
    char passenger_name[100];
    char destination[100];
    int seat_no;
};
int main(){
    int n;
    printf("Enter number of bookings: ");
    scanf("%d", &n);
    struct Ticket t[n];
    for(int i = 0; i < n; i++) {
        printf("\nEnter Ticket Number: ");
        scanf("%d", &t[i].ticket_no);
        printf("Enter Passenger Name: ");
        scanf("%s", t[i].passenger_name);
        printf("Enter Destination: ");
        scanf("%s", t[i].destination);
        printf("Enter Seat Number: ");
        scanf("%d", &t[i].seat_no);
    }
    for(int i = 0; i < n; i++) {
        printf("\nTicket Number: %d", t[i].ticket_no);
        printf("\nPassenger Name: %s", t[i].passenger_name);
        printf("\nDestination: %s", t[i].destination);
        printf("\nSeat Number: %d\n", t[i].seat_no);
    }
    return 0;
}