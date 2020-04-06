#include <stdio.h>

int main (){
    int x = 0; 
    printf("The result is: %d\n ", ++x*x) ; // 1
    x=0;
    printf("The result is: %d\n ", ++x*x++) ; // 1    
    x=0;
    printf("The result is: %d\n ", x+++x*x++) ; // 1    
    }