#include <stdio.h>
#include <string.h>

struct Passenger {
    int seatNo;
    char name[50];
};

int main() {
    struct Passenger p[20];
    int seats[20] = {0};
    int choice, seat, i;

    while (1) {
        printf("\n===== BUS TICKET RESERVATION SYSTEM =====\n");
        printf("1. View Available Seats\n");
        printf("2. Reserve Seat\n");
        printf("3. View Reserved Seats\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nAvailable Seats:\n");
                for (i = 0; i < 20; i++) {
                    if (seats[i] == 0)
                        printf("Seat %d Available\n", i + 1);
                }
                break;

            case 2:
                printf("Enter Seat Number (1-20): ");
                scanf("%d", &seat);

                if (seat < 1 || seat > 20) {
                    printf("Invalid Seat Number!\n");
                } else if (seats[seat - 1] == 1) {
                    printf("Seat Already Reserved!\n");
                } else {
                    printf("Enter Passenger Name: ");
                    scanf(" %[^\n]", p[seat - 1].name);

                    p[seat - 1].seatNo = seat;
                    seats[seat - 1] = 1;

                    printf("Seat %d Reserved Successfully!\n", seat);
                }
                break;

            case 3:
                printf("\nReserved Seats:\n");
                for (i = 0; i < 20; i++) {
                    if (seats[i] == 1) {
                        printf("Seat No: %d\tPassenger: %s\n",
                               p[i].seatNo, p[i].name);
                    }
                }
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
