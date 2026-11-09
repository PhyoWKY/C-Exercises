#include <stdio.h>

int main(){

    // switch = An alternative to using many if-else statements
    //          More efficient with fixed integer values
    
/*    
    int day_of_week = 0;

    printf("Enter a day of the week (1-7): ");
    scanf("%d", &day_of_week);

    switch(day_of_week){
        case 1:
            printf("It is Monday");
            break; // Without break statement, the code will continue executing on unwanted lines
        case 2:
            printf("It is Tuesday");
            break;
        case 3:
            printf("It is Wednesday");
            break;
        case 4:
            printf("It is Thursday");
            break;  
        case 5:
            printf("It is Friday");
            break;
        case 6:
            printf("It is Saturday");
            break;
        case 7:
            printf("It is Sunday");
            break;   
        default:
            printf("Please only enter a number (1-7)");                                                                       
    }
*/

    char day_of_week = '\0';

    printf("Enter a day of the week (M, T, W, R, F, S, U): ");
    scanf(" %c", &day_of_week);

    switch(day_of_week){
        case 'M':
            printf("It is Monday");
            break; // Without break statement, the code will continue executing on unwanted lines
        case 'T':
            printf("It is Tuesday");
            break;
        case 'W':
            printf("It is Wednesday");
            break;
        case 'R':
            printf("It is Thursday");
            break;  
        case 'F':
            printf("It is Friday");
            break;
        case 'S':
            printf("It is Saturday");
            break;
        case 'U':
            printf("It is Sunday");
            break;   
        default:
            printf("Please only enter a character (M, T, W, R, F, S, U)");                                                                       
    }

    return 0;
}