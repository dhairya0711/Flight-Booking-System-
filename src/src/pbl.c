#include <stdio.h>
#include "../include/flight.h"

Flight flights[100];
int count = 0;

int main()
{
    int choice;

    load();

    if (login() == 0)
    {
        return 0;
    }

    while (1)
    {
        printf("\n===== FLIGHT BOOKING SYSTEM =====\n");

        printf("1. Add Flight\n");
        printf("2. View Flights\n");
        printf("3. Search Flight\n");
        printf("4. Delete Flight\n");
        printf("5. Sort by Price\n");
        printf("6. Sort by Time\n");
        printf("7. Report\n");
        printf("8. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addFlight();
                break;

            case 2:
                viewFlights();
                break;

            case 3:
                searchFlight();
                break;

            case 4:
                deleteFlight();
                break;

            case 5:
                sortByPrice();
                break;

            case 6:
                sortByTime();
                break;

            case 7:
                report();
                break;

            case 8:
                save();
                printf("Thank you!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}