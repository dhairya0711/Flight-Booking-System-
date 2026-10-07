typedef struct
{
    int flight_no;
    char destination[50];
    char departure[20];
    float price;
    int seats;
} Flight;

extern Flight flights[100];
extern int count;

int compare(char a[], char b[]);
int login();

void load();
void save();

void addFlight();
void viewFlights();
void searchFlight();
void deleteFlight();

void sortByPrice();
void sortByTime();

void report();