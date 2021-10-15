#include <stdio.h>

void cubeByReference(int *nPtr);

void main(void)
{
    int number = 5;

    printf("O valor original do numero eh %d \n", number);
    cubeByReference(&number);
    printf("O novo valor do numero eh %d \n", number);
}

void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}