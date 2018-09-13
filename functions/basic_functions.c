#include <stdio.h>

void change(int *x, int *y) {
    *x = 2;
    *y = 40;
}

int main() {
    int x = 4;
    int y = 3;

    printf("The value of x: %d \n",x);
    printf("The value of y: %d \n",y);

    change(&x,&y);
    
    printf("The value of x: %d \n",x);
    printf("The value of y: %d \n",y);

    return 0;
}
