#include <stdio.h>
#include <stdbool.h>

int main(){

//    int temp = 100000;

/*    
    if(temp > 0 && temp < 30){
        printf("The temperature is GOOD");  
    }
    else{
        printf("The temperature is BAD");
    }
*/   

/*    
    if(temp <= 0 || temp >= 30){
        printf("The temperature is BAD");  
    }
    else{
        printf("The temperature is GOOD");
    }
*/        

    bool is_sunny = false;

    if(!is_sunny){
        printf("It is CLOUDY outside");
    }
    else{
        printf("It is SUNNY outside");
    }

    return 0;
}