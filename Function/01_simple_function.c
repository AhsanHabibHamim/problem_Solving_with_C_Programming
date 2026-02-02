#include <stdio.h>

int sum(int, int); // Function prototype
int sum(int a, int b)
{
    return a + b;
} // Function Declaration

int main()
{
    printf("Enter Two Numbers For Summetion: ");
    int x, y;
    scanf("%d %d", &x, &y);
    int summetion = sum(x,y); // Function Call!
    printf("The Summmestion of %d and %d is %d", x, y, summetion);
    return 0;
}