#include <stdio.h>

int main (){
    int x = 0; 
    printf("The result is: %d\n ", ++x-++x*x) ; // -3
    x = 0; 
    printf("The result is: %d\n ", ++x-++x*x++) ; // -3
    x = 0; 
    printf("The result is: %d\n ", x++-++x*x++) ; // -3
    /* this one does not work 
    x = 0; 
    printf("The result is: %d\n ", x+++++x*x++) ; */
    }