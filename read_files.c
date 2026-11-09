#include <stdio.h>

int main(){

    FILE *p_file = fopen("input.txt", "r");
    // FILE *p_file = fopen("C:\\Users\\Phyo Aung Soe\\OneDrive\\Desktop\\input.txt", "r");

    char buffer[1024] = {0};

    if(p_file == NULL){
        printf("Could not open file\n");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), p_file) != NULL){
        printf("%s", buffer);
    }

    fclose(p_file);

    return 0;
}