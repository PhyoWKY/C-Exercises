#include <stdio.h>

typedef int Number;
typedef char String[50];
typedef char Initials[3];

int main(){

    Number x = 3;
    Number y = 4;
    Number z = x + y;
    printf("%d\n", z);

    String name = "Bro Code";
    printf("%s\n", name);
    printf("\n");

    Initials user1 ="BC";
    Initials user2 ="SS";
    Initials user3 ="Ps";
    Initials user4 ="PT";
    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}