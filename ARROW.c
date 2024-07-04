#include <stdio.h>

int main()
{
    printf("\nTHIS IS AN ARROW \n");
    printf("\n");

    int i,j;
    int n = 7;
    int x = n/2 + 1;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(j == x || i-j==x-1 || i +j == n+x)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf(" \n");
    }
    return 0;
}