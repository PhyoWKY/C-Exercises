#include <stdio.h>
#include <string.h>

int main(){

    int quantity = 0;
    float price = 0.0f;
    char quality_grade = '\0';
    char item_type[30] = "";

    printf("Please select your item: ");
    fgets(item_type, sizeof(item_type), stdin);
    item_type[strlen(item_type) - 1] = '\0';

    printf("Please select your quantity: ");
    scanf("%d", &quantity);

    printf("The quality grade of the item is(A, B, C): ");
    scanf(" %c", &quality_grade);

    printf("The price is: $");
    scanf("%f", &price);

    printf("\n");
    printf("Your item is %s\n", item_type);
    printf("You have selected %d item(s)\n", quantity);
    printf("The quality of item is grade (%c)\n", quality_grade);
    printf("The price is $%.2f\n", price);

    return 0;
}