// *
// **
// ***
// ****
// #include<stdio.h>
// int main()
// {
//     int r , i, j;
//     printf("enter row ");
//     scanf("%d", &r);

//     for(i=1;i<=r;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     // r = 5  i 4 3 2 1 
//     for(i=r;i>=1;i--)
//     {
//         for(j=r;j>=i;j--) // 4 - 4 , 4 - 3 , 4 - 2 , 4 - 1
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(i=r;i>=1;i--)
//     {
//         for(j=i ;j<=r;j++) // 4 - 4 , 4 - 3 , 4 - 2 , 4 - 1
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     // i     j 
//     // 4    4 to 4
//     // 3    3 to 4 
//     // 2
//     // 1

//     for(i=1;i<=r;i++)
//     {
//         for(j=r;j>=r-i+1; j--) // 4 - 4 , 4 - 3 , 4 - 2 , 4 - 1
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

// }
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

// 1234
// 123
// 12
// 1

// 1
// 12
// 123
// 1234

// 1
// 21
// 321
// 4321


