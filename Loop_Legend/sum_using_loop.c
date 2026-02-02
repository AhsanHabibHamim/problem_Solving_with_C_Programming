#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 == !0)
        {
            printf("The sum is %d", sum);
            sum += i;
        }
    }
    printf("Sum is %d", sum);

    return 0;
}