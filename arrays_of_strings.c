#include <stdio.h>
#include <string.h>

void exercise();

int main(){

    char fruits[][10] = {"Apple", 
                         "Banana", 
                         "Coconut", 
                         "Pineapple", 
                         "Lemon"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    fruits[0][0] = 'e';
    fruits[0][4] = 'A';

    fruits[1][0] = 'a';
    fruits[1][5] = 'B';

    fruits[2][0] = 'a';
    fruits[2][6] = 'C';

    for(int i = 0; i < size; i++){
        printf("%s\n",fruits[i]);
    }

    exercise();

    return 0;
}

void exercise(){

    char names[4][25] = {0};

    int rows = sizeof(names) / sizeof(names[0]);

    for(int i = 0; i < rows; i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for(int i = 0; i < rows; i++){
        printf("%s\n", names[i]);
    }

}