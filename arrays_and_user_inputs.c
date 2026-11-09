#include <stdio.h>

int main(){

    int scores_1[5];
    for(int i = 0; i < 5; i++){
        printf("%d ", scores_1[i]);
    }

    printf("\n");

    int scores_2[5] = {0};
    for(int i = 0; i < 5; i++){
        printf("%d ", scores_2[i]);
    }

    printf("\n\n");

    int scores_3[5] = {0};

    for(int i = 0; i < 5; i++){
        printf("Enter a score: ");
        scanf("%d", &scores_3[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", scores_3[i]);
    }

    return 0;
}