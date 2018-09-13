#include <stdio.h>

void change(int n[]) {
    n[0] = 5;
    n[1] = 4;
    n[2] = 3;
}

int main() {
    int num[3];

    num[0] = 3;
    num[1] = 4;
    num[2] = 5;

    printf("The values are: %d %d %d. \n", num[0], num[1], num[2]);

    change(num);

    printf("The values are: %d %d %d. \n", num[0], num[1], num[2]);
 
    return 0;
}
