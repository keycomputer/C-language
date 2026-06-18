
/**
 * C program to all natural numbers in reverse from n to 1
 */

#include <stdio.h>

int main()
{
    int i, start;
    printf("Enter starting value: ");
    scanf("%d", &start);
printf("\n--------For Loop --------\n");
    for(i=start; i>=1; i--)
    {
        printf("%d\n", i);
    }
    printf("\n--------While Loop --------\n");
    i = start;
    while(i>=1)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}