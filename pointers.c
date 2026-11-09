#include <stdio.h>

void birthday(int* age);

int main(){

    int age = 25;
    int *p_age = &age; 
    
    printf("%p\n", &age);
                          
    printf("%p\n", p_age); 

    // birthday(&age);

    birthday(p_age);
    printf("\nYou are %d years old", age);

    return 0;
}

void birthday(int* age){
    (*age)++; 
}