#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int recursiveMaximum(int *arr, int size);

int main(void)
{
    srand(time(NULL));
    int arrlen =2 + rand() % 99;
    int arr[arrlen];
    printf("Array is:\n");
    for (int i = 1;i <= arrlen;i++)
    {
        arr[i] = 1 + rand() % 100;
        if (i % 10 == 0)
            printf("%d\n", arr[i]);
        else
            printf("%d ", arr[i]);
    }
    printf("\n");
    int max = recursiveMaximum(arr, arrlen);
    printf("The maximum number in array is %d\n",max);
    system("pause");
    return 0;
}

int recursiveMaximum(int *arr, int size)
{
    if (size == 1)
    {
        return arr[0];
    }
    else
    {
        int max = recursiveMaximum(arr, size-1);
        if (max > arr[size-1])
            return max;
        else
            return arr[size-1];
    }
}