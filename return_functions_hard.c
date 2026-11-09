#include <stdio.h>
#include <stdbool.h>

int square_int(int num){
    int result_1 = 0;
    result_1 = num * num;
    return result_1;
}

void example_1(){

    int num = 0;

    printf("Please enter an integer to be squared: ");
    int input = scanf("%d", &num);

    if(input != 1){
        printf("Invalid input! Please enter an integer!\n");
        scanf("%*[^\n]%*c"); // Trick for preventing the other scanf to pick up \n
    }
    else{
        int result_1 = square_int(num);
    printf("The squared value is %d\n", result_1);
    }
}

double square_dou(double num){
    double result_2 = 0.0;
    result_2 = num * num;
    return result_2;
}    

void example_2(){

    double num = 0.0;

    printf("\nPlease enter a decimal number to be squared: ");
    double input = scanf(" %lf", &num);

    if(input != 1){
        printf("Invalid input! Please enter a decimal number!\n");
        scanf("%*[^\n]%*c");
    }
    else{
        double result_2 = square_dou(num);
    printf("The squared value is %.4lf\n", result_2);
    }
}

double cube_dou(double num){
    double result_3 = 0.0;
    result_3 = num * num * num;
    return result_3;
}

void example_3(){
    
    double num = 0.0;

    printf("\nPlease enter a decimal number to be cubed: ");
    double input = scanf(" %lf", &num);

    if(input != 1){
        printf("Invalid input! Please enter a decimal number!\n");
        scanf("%*[^\n]%*c");
    }
    else{
        double result_3 = cube_dou(num);
    printf("The cubed value is %.4lf\n", result_3);
    }
}

bool age_check(int age){
    if(age < 18){
        return false;
    }
    else{
        return true;
    }
}

void example_4(){

    int age = 0;

    printf("\nPlease enter your age: ");
    int age_reached = scanf("%d", &age);

    if(age_reached != 1){
        printf("Invalid input! Please enter your age in number!\n");
        scanf("%*[^\n]%*c");
    }
    else if(age_check(age) == true){
        printf("You have signed up!\n");
    }
    else{    
        printf("You must be 18+ to sign up!\n");
    }
}

double get_max(double x, double y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}

void example_5(){
    
    double num_1 = 0.0;
    double num_2 = 0.0;

    printf("\nPlease enter a decimal number: ");
    double input_1 = scanf(" %lf", &num_1);
    scanf("%*[^\n]%*c");
    printf("Please enter another decimal number: ");
    double input_2 = scanf(" %lf", &num_2);
    scanf("%*[^\n]%*c");

    double max_num = get_max(num_1, num_2);

    if(input_1 != 1 || input_2 != 1){
        printf("Invalid first or second number! Please enter decimal numbers!\n");
    }
    else{
        printf("The greater value is %.4lf", max_num);
    }
}

int main(){

    example_1();
    example_2();
    example_3();
    example_4();
    example_5();

    return 0;
}