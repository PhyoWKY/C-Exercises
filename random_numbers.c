#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_num_generator1();
void random_num_generator2();
void random_num_generator3();

int main(){

    printf("%d", rand());

    printf("\n");

    srand(time(NULL));
    printf("%d\n", RAND_MAX);

    printf("\n");

    random_num_generator1();

    printf("\n");

    random_num_generator2();

    printf("\n");

    random_num_generator3();

    return 0;
}

void random_num_generator1(){

    srand(time(NULL));

    int random_num1 = rand() % 2;
    int random_num2 = (rand() % 2) + 1;

    printf("%d\n", random_num1);
    printf("%d\n", random_num2);

}

void random_num_generator2(){

    srand(time(NULL));

    int min = 1;
    int max = 6;

    int random_num = (rand() % max) + min;

    printf("%d\n", random_num);

}

void random_num_generator3(){

    srand(time(NULL));

    int min = 50;
    int max = 100;

    int random_num1 = (rand() % (max - min + 1)) + min;
    int random_num2 = (rand() % (max - min + 1)) + min;
    int random_num3 = (rand() % (max - min + 1)) + min;

    printf("%d %d %d\n", random_num1, random_num2, random_num3);

}