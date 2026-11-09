#include <stdio.h>

int main(){

    int numbers[] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++){
        printf("%d ", numbers[i]);
    }

    printf("\n");

    printf("\n%d\n", numbers);
    printf("%d\n", numbers[5]);

    printf("\n");

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[4]);

    printf("\n");

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    printf("%c\n", grades[0]);
    for(int i = 0; i < 5; i++){
        printf("%c ", grades[i]);
    }

    printf("\n");

    char name[] = "Bro Code";
    printf("\n%c\n", name[0]);
    for(int i = 0; i < 8; i++){
        printf("%c ", name[i]);
    }

    printf("\n");

    int more_numbers[] = {10, 20, 30, 40, 50};
    more_numbers[0] = 100;
    more_numbers[1] = 90;
    more_numbers[2] = 80;
    more_numbers[3] = 70;
    more_numbers[4] = 60;

    printf("\n%d\n", more_numbers[0]);
    printf("%d\n", more_numbers[1]);
    printf("%d\n", more_numbers[2]);
    printf("%d\n", more_numbers[3]);
    printf("%d\n", more_numbers[4]);

    printf("\n");

   int auto_num[] = {123123, 20, 30, 40, 50, 60, 70, 80};

    printf("%d bytes\n", sizeof(auto_num));
    printf("%d bytes\n", sizeof(auto_num[0]));

    printf("\n");

    int size = sizeof(auto_num) / sizeof(auto_num[0]);

    for(int i = 0; i < size; i++){
        printf("%d ", auto_num[i]);
    }

    return 0;
}