#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Array elements after calloc (initialized to 0): ");
