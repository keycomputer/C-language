///// Nested Loops ///////
// #include<stdio.h>
// int main()
// {
//     int i, j;
//     for(i=1;i<=10;i++)
//     {
//         for(j=1;j<=5;j++)
//             printf("%d - %d, ", i, j);
//         printf("\n");
//     }
// }

// C Program to print tables from numbers 1 to 20.

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i, j;
//     for(i=1;i<=20;i++)
//     {
//         for(j=1;j<=10;j++)
//             printf("%d * %d = %d\n", i, j, i*j);
//         getche(); // getch() ->a character (Scanf("%c",&ch) // ch=  getch()
//         printf("\n");
//     }
// }
// print all Prime numbers between 1 to n.(important)
// #include<stdio.h>
// int main()
// {
//     int i, j , n ;
//     printf("Enter n ");
//     scanf("%d", &n);
//     for(i=2;i<=n;i++) // number -> check for prime number or not 
//     {
//         for(j=2;j<i;j++)
//         {
//             if (i % j == 0)
//                 break;
//         }
//         if (i == j)
//             printf("%d\t", i);
//     }
// }
// print all Perfect numbers between 1 to n.
// display Factors 
// #include<stdio.h>
// int main()
// {
//     int i, j , n ;
//     printf("Enter n ");
//     scanf("%d", &n);
//     for(i=1;i<=n;i++) // number 
//     {
//         printf("Factors of %d :: ", i);
//         for(j=1;j<=i;j++)
//         {
//             if (i % j == 0 )
//                 printf("%d\t", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// // perfect numbers 
// #include<stdio.h>
// int main()
// {
//     int i, j , n , sum =0 ;
//     printf("Enter n ");
//     scanf("%d", &n);
//     for(i=1;i<=n;i++) // number 
//     {
//         sum = 0 ;
//         for(j=1;j<=i;j++)
//         {
//             if (i % j == 0 )
//                 sum += j;
//         }
//         if (i * 2 == sum)
//             printf("%d\t", i);
//     }
//     return 0;
// }


// find all prime factors of a number.
#include<stdio.h>
int main()
{
    int i, j ,k, n ;
    printf("Enter n ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) // number 
    {
        printf("Prime Factors of %d :: ", i );
        for(j=1;j<=i;j++)
        {
            if (i % j == 0 ) // j factor 
            {
                for(k=2;k<j;k++)
                    if( j % k == 0)
                        break;
                if (k == j )
                    printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}



