#include <stdio.h>

int main(){

    FILE *p_file = fopen("output.txt", "w");
    // FILE *p_file = fopen("C:\\Users\\Phyo Aung Soe\\OneDrive\\Desktop\\output.txt", "w");

    char text[] = "NULL NULL\nThis is just testing";

    if(p_file == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(p_file, "%s", text);
    printf("File was written successfully in this directory\n");

    fclose(p_file);

    return 0;
}