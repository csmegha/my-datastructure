#include <stdio.h>
#include<stdlib.h>
int main() {
    int *ptr,n=5;
    ptr=(int*) malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    {
    ptr[i]=i+1;
    printf(" %d\n",ptr[i]);
    }
    
    free (ptr);
    
    return 0; 
}
