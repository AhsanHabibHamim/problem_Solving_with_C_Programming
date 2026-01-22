#include <stdio.h>
int main()
{

    printf("Please enter your Array Size first: ");
    int n;
    scanf("%d", &n);
    int ahsan[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ahsan[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ahsan[i]);
    }

    return 0;
}