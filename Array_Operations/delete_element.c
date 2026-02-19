#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the index whose value you want to delete: ");
    scanf("%d", &x);
    for (int i = x; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}