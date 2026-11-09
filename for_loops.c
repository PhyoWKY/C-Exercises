#include <stdio.h>
#include <windows.h>

void new_year_countdown();

int main(){

    for(int i = 0; i <= 10; i++){
        printf("%d\n", i);
    }
    printf("\n");

    for(int i = 0; i <= 10; i+=2){
        printf("%d\n", i);
    }
    printf("\n");

    for(int i = 10; i >= 0; i--){
        printf("%d\n", i);
    }
    printf("\n");

    for(int i = 10; i >= 0; i-=2){
        printf("%d\n", i);
    }
    printf("\n");

    new_year_countdown();

    return 0;
}

void new_year_countdown(){
    for(int i = 10; i >= 0; i--){
        Sleep(1000);
        printf("%d\n", i);
    }
    printf("Happy New Year!");
}