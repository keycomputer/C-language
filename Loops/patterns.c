// #include<stdio.h>
// * * * * 
// * * * *
// * * * *
// * * * * 
// int main()
// {
//     int i, j ;
//     for(i = 1; i <= 4 ;i++ )
//     {
//         for(j = 1; j <= 4 ; j++)
//             printf("* ");
//         printf("\n");
//     }
// }
// * * * *
// * * * *
// #include<stdio.h>
// int main()
// {
//     int i, j ,r, c ;
//     printf("Enter row and columns ");
//     scanf("%d%d", &r, &c);

//     for (i = 1 ; i<=r;i++)
//     {
//         for(j = 1 ; j<=c;j++)
//             printf("* ");
//         printf("\n");
//     }
// }

/*
1 1 1 1 
2 2 2 2
3 3 3 3
*/

// #include<stdio.h>
// int main()
// {
//     int i, j ,r, c ;
//     printf("Enter row and columns ");
//     scanf("%d%d", &r, &c);
//     for (i = 1 ; i<=r;i++)
//     {
//         for(j = 1 ; j<=c;j++)
//             printf("%d ", i );
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int i, j ,r, c ;
//     printf("Enter row and columns ");
//     scanf("%d%d", &r, &c);
//     for (i = 1 ; i<=r;i++)
//     {
//         for(j = 1 ; j<=c;j++)
//             printf("%d ", j );
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int i, j ,r, c ;
//     printf("Enter row and columns ");
//     scanf("%d%d", &r, &c);
//     for (i = 1 ; i<=r;i++)
//     {
//         for(j = 1 ; j<=c;j++)
//             printf("(%d,%d)  ", i, j );
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int i, j ,r, c , k ;
//     printf("Enter row and columns ");
//     scanf("%d%d", &r, &c);
//     for (i = 1 ; i<=r;i++)
//     {
//         k = i ;
//         for(j = 1 ; j<=c;j++){
//             printf("%d ", k);
//             k+=1;
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int i, j ,r, c ;
//     printf("Enter row and columns ");
//     scanf("%d%d", &r, &c);
//     for (i = 1 ; i<=r;i++)
//     {
//         for(j = 1 ; j<=c;j++){
//             printf("%d ", i+j-1);
//         }
//         printf("\n");
//     }
// }
// #########################################

// A B C D 
// A B C D
// A B C D

// #include<stdio.h>
// int main()
// {
//     int r, c, i, j ;
//     char ch = 'A';
//     printf("Enter row and column :  ");
//     scanf("%d%d", &r, &c);

//     for(i=1 ;i<=r;i++)
//     {
//         ch = 'A';
//         for(j=1; j<=c;j++)
//         {
//             printf("%c\t", ch+j-1);        
//         }
//         printf("\n");
//     }
// }

// 3 , 4 
// A B C D 
// B C D E 
// C D E F 

// #include<stdio.h>
// int main()
// {
//     int r, c, i, j , k;
//     char ch = 'A';
//     printf("Enter row and column :  ");
//     scanf("%d%d", &r, &c);

//     for(i=1 ;i<=r;i++)
//     {
//         k = ch + i -1 ;
//         for(j=1; j<=c;j++)
//         {
//             printf("%c\t",k );
//             k+=1;        
//         }
//         printf("\n");
//     }
// }


// 4 4 4 4
// 3 3 3 3
// 2 2 2 2 
// 1 1 1 1
// #include<stdio.h>
// int main()
// {
//     int r, c, i, j ;

//     printf("Enter row and column :  ");
//     scanf("%d%d", &r, &c);

//     for(i=r ;i>=1;i--)
//     {
//         for(j=c; j>=1;j--)
//         {
//             printf("%d\t",i);        
//         }
//         printf("\n");
//     }
// }
//  4  4 
//  D D D D 
//  C C C C 
//  B B B B 
//  A A A A 
// #include<stdio.h>
// int main()
// {
//     int r, c, i, j ;
//     char ch = 'A';
//     printf("Enter row and column :  ");
//     scanf("%d%d", &r, &c);
//     ch = ch + r - 1 ; 
//     for(i=1 ;i<=r;i++)
//     {
//         for(j=1; j<=c;j++)
//         {
//             printf("%c\t", ch);        
//         }
//         ch--;
//         printf("\n");
//     }
// }
// 4 X 5 
// 5 4 3 2 1 
// 5 4 3 2 1
// 5 4 3 2 1 
// 5 4 3 2 1 
#include<stdio.h>
int main()
{
    int i, j ,r, c ;
    printf("Enter row and columns ");
    scanf("%d%d", &r, &c);
    for (i = r ; i>=1;i--)
    {
        for(j = c ; j>=1;j--)
            printf("%d ", j );
        printf("\n");
    }
}
// 3 X 5
// 1 2 3 4 5 
// 2 3 4 5 6
// 3 4 5 6 7
// // #######################################################
// *
// **
// ***
// ****


