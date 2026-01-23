#include <stdio.h>
int main(){
    printf("Enter the size of array: ");
    int n;
    scanf("%d", &n);
    int ahsan[n];
    for(int i = 0; i <n; i++)
    {
        scanf("%d", &ahsan[i]);
    }
    for(int i = n-1; i>=0; i--)
    {
        printf("%d\n", ahsan[i]);
    }

    return 0;
}