#include<stdio.h>
int factorial(int num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * (factorial(num - 1));
    }
}
int main()
{
    int n, ans = 0;

    printf("Number: ");
    scanf("%d", &n);
    ans = factorial(n);
    
    printf("Factorial is: %d", ans);
    
    return 0;
}
