#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;  // points to first element

    printf("First element: %d\n", *p);
    p++; // move to next element
    printf("Second element: %d\n", *p);
    p++;
    printf("Third element: %d\n", *p);

    return 0;
}
