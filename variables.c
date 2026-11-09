#include <stdio.h>
#include <stdbool.h>

int main(){

    int hp = 57;
    float score = 67.3443;
    double value = 98.54357669633085;
    char language = 'c';
    char type[] = "workshop machines";
    bool isDefective = false;

    printf("Your remaining HP is %d/100\n", hp);
    printf("Your final score is %.2f\n", score);
    printf("Your approximate value is %.15lf\n", value);
    printf("I am writing codes in %c\n", language);
    printf("The drill is one of the %s\n", type);

    if(isDefective){
        printf("The machine is defective\n");
    }
    else{
        printf("The machine is functional\n");
    }

    return 0;
}