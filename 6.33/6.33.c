#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarysearch(int rnum[], int ssub, int esub,int skey);
void bubblesort(int arr[], int n);

int main(void)
{
    int rnum[20];
    int num, ssub, esub;
    int result;
    srand(time(0));
    for (int i = 0;i < 20;i++)
    {
        rnum[i] =1 + rand() % 20;
    }
    bubblesort(rnum, 20);
    printf("What integer you want to find (1 ~ 20):");
    scanf("%d", &num);
    printf("Those numbers stored in a array rnum[20]\nWhere do you want to find in array (Enter 2 subscript, 1 starting subscript, 1 ending subscript):");
    scanf("%d %d", &ssub, &esub);
    result = binarysearch(rnum, ssub, esub, num);
    if (result == -1)
    {
        printf("\nNot Found\n");
    }
    else
    {
        printf("\n%d stored in rnum[%d]\n", num, result);
    }
    system("pause");
    return 0;
}

int binarysearch(int rnum[], int ssub, int esub, int num)
{
    int half = (int)(ssub + esub) / 2;
    if (half == ssub || half == esub)
    {
        return -1;
    }
    else if (rnum[half] == num)
    {
        return half;
    }
    else if (rnum[half] < num)
    {
        binarysearch(rnum, half, esub, num);
    }
    else if (rnum[half] > num)
    {
        binarysearch(rnum, ssub, half, num);
    }
}

void bubblesort(int arr[],int n)
{
    int temp;
    for (int i = 0;i < n;i++)
    {
        for (int j = i;j < n;j++)
        {   
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}