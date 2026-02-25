#include <stdio.h>
int main()
{
    char string[50];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &string[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c", string[i]);
    }
    return 0;
}