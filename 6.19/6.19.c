#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dice1, dice2;
    int apptimes[11] = {0};
    srand(time(NULL));
    for (int i = 0; i < 36000;i++)
    {
        dice1 = 1 + rand() % 6;
        dice2 = 1 + rand() % 6;
        apptimes[(dice1 + dice2) - 2] ++;
    }
    for (int i = 0; i < 11; i++)
    {
        printf("Point %2d appears %4d times\n", (i + 2), apptimes[i]);
    }
    system("pause");
    return 0;
}