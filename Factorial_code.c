#include<stdio.h>
int main()
{
    int n, factorical = 1;
    printf("\nEnter Number: ");
    scanf("%d",&n);

    while(n >= 1)
    {
        factorical = n * factorical;
        n--;
    }
    printf("Factorial: %d", factorical);
    return 0;
}