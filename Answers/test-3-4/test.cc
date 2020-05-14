#include "stdio.h"

int main() {
    int x,y;
		{ 	
			x = y = 2;
			int y = 3;
		}
		y = 2*x;
        printf("%d\n", y);
}