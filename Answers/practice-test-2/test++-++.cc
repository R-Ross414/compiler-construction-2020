#include <stdio.h>

int main (){
    int x = 1; 
    printf("The result is: %d\n ", x++-++x) ; 
    printf("The result is: %d\n ", x++-x--) ; 
    printf("The result is: %d\n ", ++x-x--) ; 
    printf("The result is: %d\n ", ++x-(--x)) ; 
    printf("The result is: %d\n ", x+++(++x)) ; 
    printf("The result is: %d\n ", ++x*x+++(++x)) ;  
    printf("The result is: %d\n ", --x-x+(++x)) ; 
    }