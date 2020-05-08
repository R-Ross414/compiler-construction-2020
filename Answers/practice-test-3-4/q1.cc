# include <stdio.h>

int main() {
    int y ;
    int x ;
    {   x = 2 ;
        int x = 3 ;
        }
    y = 2*x ;
    printf("x is %d\n ", x) ;
    printf("y is %d\n ", y) ;
}