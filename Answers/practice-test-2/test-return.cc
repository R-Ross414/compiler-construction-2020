#include <stdio.h>

int f (){
    int x = 1; 
    return ++x*x+++(++x) ; // 8
    }

int g (){
    int x = 10; 
    return --x-x--+(--x) ; // 0
    }

int main (){
    printf("The result of f is: %d\n ", f()) ; 
    printf("The result of g is: %d\n ", g()) ; 
    }

