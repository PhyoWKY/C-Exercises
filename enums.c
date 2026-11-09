#include <stdio.h>

void more_examples(int today_2);

enum Day{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4,
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
};

typedef enum{
    SUCCESS, FAILURE, PENDING
}Status;

void connect_status(Status status_test);

int main(){

    enum Day today = TUESDAY;
    printf("%d", today);


    typedef enum{
        SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4,
        THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
    }Day;
    printf("\n");

    Status status_test = PENDING;

    Day today_2 = SATURDAY;
    printf("%d\n", today_2);

    more_examples(today_2);

    connect_status(status_test);

    return 0;
}

void more_examples(int today_2){

    if(today_2 == SUNDAY || today_2 == SATURDAY){
        printf("It's the weekend\n");
    }
    else{
        printf("It's a weekday\n");
    } 

}

void connect_status(Status status_test){

    switch(status_test){
        case SUCCESS:
            printf("Connection was successful\n");
            break;
        case FAILURE:
            printf("Could not connect\n");
            break;
        case PENDING:
            printf("Connecting...\n");
            break;
    }

}