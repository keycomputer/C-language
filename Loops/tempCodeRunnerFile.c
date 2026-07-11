#include<stdio.h>
int main()
{
    int r , i, j;
    printf("enter row ");
    scanf("%d", &r);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for(i=r;i>=1;i--)
    {
        for(j=r;j>=i;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}