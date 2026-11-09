#include <stdio.h>

typedef struct{
    char model[25];
    int year;
    int price;
}Car;

int main(){

    Car car_1 = {"Mustand", 2025, 32000};
    Car car_2 = {"Corvette", 2026, 68000};
    Car car_3 = {"Challenger", 2024, 29000};

    printf("%s %d $%d\n", car_1.model, car_1.year, car_1.price);
    printf("%s %d $%d\n", car_2.model, car_2.year, car_2.price);
    printf("%s %d $%d\n", car_3.model, car_3.year, car_3.price);
    printf("\n");

    Car cars[] = {{"Mustand", 2025, 32000},
                  {"Corvette", 2026, 68000},
                  {"Challenger", 2024, 29000}};

    int number = sizeof(cars) / sizeof(cars[0]);  
    
    for(int i = 0; i < number; i++){
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}