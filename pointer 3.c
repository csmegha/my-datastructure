#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;
    int **pp = &p;   // pointer to pointer

    printf("Value of a: %d\n", a);
    printf("Value of *p: %d\n", *p);
    printf("Value of **pp: %d\n", **pp);

    return 0;
}
