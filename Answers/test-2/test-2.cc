#include <stdio.h>

int main (){
    int x = 1; 
    printf("The result is: %d\n ", ++x*x+++(++x)) ; //8
    x = 10;
    printf("The result is: %d\n ", --x-x--+(--x)) ; //7
}

