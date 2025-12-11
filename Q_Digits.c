#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        int n;
        scanf("%d", &n);
        while (n != 0)
        {
            printf("%d ", n % 10);
            n /= 10;
        }
        printf("\n");
    }
    return 0;
}