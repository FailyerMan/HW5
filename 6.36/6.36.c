#include <stdio.h>
#include <stdlib.h>

void stringreverse(char *str);


int main(void)
{   
    char str[100];
    printf("Enter a string:");
    scanf("%s", &str);
    printf("The reverseString is:");
    stringreverse(str);
    printf("\n");
    system("pause");
    return 0;
}

void stringreverse(char *str)
{
    if (*str == '\0')
    {
        return ;
    }
    else
    {
        stringreverse(str + 1);
        printf("%c", *str);
    }
}