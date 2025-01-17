#include <stdio.h>


struct Car {
    int carID;
    char model[50];
    float rentalRatePerDay;
};


void inputCarData(struct Car *c) {
    printf("Enter Car ID: ");
    scanf("%d", &c->carID);
    printf("Enter Car Model: ");
    scanf(" %[^\n]s", c->model);
    printf("Enter Rental Rate per Day: ");
    scanf("%f", &c->rentalRatePerDay);
}


void displayCarInfo(struct Car c, int days) {
    float totalCost = c.rentalRatePerDay * days;
    printf("\nCar ID: %d\n", c.carID);
    printf("Model: %s\n", c.model);
    printf("Rental Rate per Day: %.2f\n", c.rentalRatePerDay);
    printf("Total Rental Cost for %d day(s): %.2f\n", days, totalCost);
}

int main() {
    struct Car cars[3];
    int i, days;

    
    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Car %d:\n", i + 1);
        inputCarData(&cars[i]);
    }

   
    printf("\nEnter the number of days for rental: ");
    scanf("%d", &days);

   
    printf("\nCar Rental Details:\n");
    for (i = 0; i < 3; i++) {
        printf("\nDetails for Car %d:\n", i + 1);
        displayCarInfo(cars[i], days);
    }

    return 0;
}
