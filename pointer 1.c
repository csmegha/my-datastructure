#include <stdio.h>

int main() {
    int a = 10;       // normal variable
    int *p;           // pointer variable
    p = &a;           // store address of 'a' in 'p'

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value stored in p (address of a): %p\n", p);
    printf("Value pointed by p: %d\n", *p);  // dereferencing

    return 0;
}






Output (example):

Value of a: 10
Address of a: 0x7ffeefbff5a8
Value stored in p (address of a): 0x7ffeefbff5a8
Value pointed by p: 10
