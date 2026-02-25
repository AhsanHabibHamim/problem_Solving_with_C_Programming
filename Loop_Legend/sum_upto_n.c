#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number upto which you want the sum:");
    scanf("%d", &n);
    int sum = 0;
    // sum = n*(n+1)/2;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The Sum Is: %d \n", sum);
    return 0;
}