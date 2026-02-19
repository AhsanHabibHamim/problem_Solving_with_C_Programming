#include <stdio.h>
int main()
{
    int m;
    printf("Enter the size of the Array: ");
    scanf("%d", &m);
    int n = m + 1;
    int arr[n];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    int nox, val;
    printf("Please enter number of index and then value: ");
    scanf("%d %d", &nox, &val);
    for (int i = n; i > nox; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[nox] = val;

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}