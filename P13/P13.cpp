#include <stdio.h>
#include <stdlib.h>

void cubeByRefrence(int &nptr);

int main(void)
{
    int number = 5;
    printf("The original value of number is %d", number);
    cubeByRefrence(number);
    printf("\nThe new value of number is %d\n", number);
    system("pause");
    return 0;
}

void cubeByRefrence(int &nptr)
{
    nptr = nptr * nptr * nptr;
}