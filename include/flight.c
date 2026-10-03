#ifndef FLIGHT_H
#define FLIGHT_H

#define MAX_FLIGHTS 100
#define MAX_BOOKINGS 500

typedef struct
{
    char flightNumber[20];
    char destination[50];
    char departureTime[20];
    float ticketPrice;
    int totalSeats;
    int availableSeats;
} Flight;

typedef struct
{
    char flightNumber[20];
    char passengerName[50];
    int seatsBooked;
    float amount;
} Booking;

/* Authentication */
int adminLogin(void);

/* Flight operations */
void addFlight(void);
void deleteFlight(void);
void viewFlights(void);

/* Search */
void searchFlight(void);

/* Sorting */
void sortFlights(void);

/* Booking */
void bookFlight(void);
void cancelBooking(void);

/* Reports */
void generateReport(void);

/* String utilities */
void copyString(char *destination, const char *source);
int compareString(const char *str1, const char *str2);

#endif