#include <stdio.h>

int main() {
    int  x  = 3;
    int *y  = &x;
    
    printf("Value of x: %d \n",x);
    printf("Value of y: %d \n",*y);

    x = 4;
    
    printf("Value of x: %d \n",x);
    printf("Value of y: %d \n",*y);
}
