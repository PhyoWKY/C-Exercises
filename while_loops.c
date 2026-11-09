#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void user_name();
void is_running();

int main(){

    user_name();
    is_running();

    int num_1 = 0;

    while(num_1 <= 0){
        printf("Enter a nuber greater than 0: ");
        scanf("%d", &num_1);
    }

    int num_2 = 100;

    do{
        printf("Enter another number greater than 0: ");
        scanf(" %d", &num_2);
        scanf("%*[^\n]%*c");
    }while(num_2 <= 0);

    return 0;
}

void user_name(){
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    while(strlen(name) == 0){
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s\n", name);
}

void is_running(){
    bool is_running = true;
    char response = '\0';

    while(is_running){
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response);

        if(response != 'Y'){
            is_running = false;
        }
    }

    printf("You exit the game\n");
}