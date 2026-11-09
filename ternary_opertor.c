#include <stdio.h>
#include <stdbool.h>

int main(){

    int x = 7;
    int y = 6;
    int max = (x > y) ? x : y;
    printf("%d is the maximum", max);
    printf("\n");

    bool is_online = true;
    printf("%s", (is_online) ? "online" : "offline");
    printf("\n");

    int number = 12;
    printf("%d is %s", number, (number % 2 == 0) ? "even" : "odd");
    printf("\n");

    int age = 10;
    printf("%s", (age > 18) ? "adult" : "child");
    printf("\n");

    int hours = 12;
    int minutes = 30;
    char *meridiem = (hours < 12) ? "AM" : "PM";

    printf("%02d:%02d %s", hours, minutes, meridiem);

    return 0;
}