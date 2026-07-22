////////////////// Input and Output - 2D Array 
// #include<stdio.h>

// int main()
// {
//     int arr[100][100], r, c;
//     int i, j; 
//     printf("enter rows and cols :: ");
//     scanf("%d%d", &r, &c);
//     // input 
//     for(i = 0 ; i < r ; i++)
//     {
//         for(j = 0; j < c; j++ )
//         {
//             printf("enter data in(%d, %d) : ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     // output
//     for(i = 0 ; i < r ; i++)
//     {
//         for(j = 0; j < c; j++ )
//             printf("%d\t", arr[i][j]);
//         printf("\n");
//     }

// }


////////////////// Sum of all elements //////////////////
///////////////// Sum of Diagonals ///////////////////

// #include<stdio.h>
// int main()
// {
//     int arr[100][100], r, c;
//     int i, j, sum = 0 , sumMa=0 , sumMi=0; 
//     printf("enter rows and cols :: ");
//     scanf("%d%d", &r, &c);
//     // input 
//     for(i = 0 ; i < r ; i++)
//     {
//         for(j = 0; j < c; j++ )
//         {
//             printf("enter data in(%d, %d) : ", i, j);
//             scanf("%d", &arr[i][j]);
//             sum += arr[i][j]; 
//         }
//     }
//     // output
//     // for(i = 0 ; i < r ; i++)
//     // {
//     //     for(j = 0; j < c; j++ )
//     //         printf("%d\t", arr[i][j]);
//     //     printf("\n");
//     // }
//     printf("\nSum of All Elements = %d\n", sum);
//     // Assume -> row == column 
//     // Sum of Diagonal and output
//     for(i = 0 ; i < r ; i++)
//     {
//         for(j = 0; j < c; j++ )
//         {
//             if(i == j )
//             {
//                 printf("%d\t", arr[i][j]);
//                 sumMa+=arr[i][j];
//             }
//         }
//     }
//     printf("\nSum of Major Diagonal  = %d\n\n", sumMa);
//     for(i = 0 ; i < r ; i++)
//     {
//         for(j = 0; j < c; j++ )
//         {
//             if(i + j == r-1  )
//             {
//                 printf("%d\t", arr[i][j]);
//                 sumMi+=arr[i][j];
//             }
//         }
//     }
//     printf("\nSum of Minor Diagonal  = %d\n\n", sumMi);
// }

////////////////// Upper Triangle and Lower triangle 

// #include<stdio.h>
// int main()
// {
//     int arr[4][4]= { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
//     int n= 4;
//     int i, j; 
//     // Display Upper Triangle 
//     for(i = 0 ; i < n ; i++)
//     {
//         for(j = 0; j < n; j++ )
//         {
//             if(i <= j )
//                 printf("%d\t", arr[i][j]);
//             else
//                 printf(" \t");
//         }
//         printf("\n");
//     }
//     // Display Lower Triangle 
//     for(i = 0 ; i < n ; i++)
//     {
//         for(j = 0; j < n; j++ )
//         {
//             if(i >= j )
//                 printf("%d\t", arr[i][j]);
//             else
//                 printf(" \t");
//         }
//         printf("\n");
//     }
// }

////////////////////////////////////////////////////////////////
///////////// Sum of Two Matrices //////////////////////////////

// #include<stdio.h>
// void inputArray(int arr[10][10], int r, int c);
// void outputArray(int arr[10][10], int r, int c);
// void Addition(int arr1[10][10], int arr2[10][10], int r, int c);
// int main()
// {
//     int A[10][10], B[10][10];
//     int r, c;
//     printf("Enter rwos and cols ");
//     scanf("%d%d", &r, &c);
//     inputArray(A, r, c);
//     inputArray(B, r, c);

//     outputArray(A,r,c);
//     outputArray(B,r,c);
//     Addition(A, B, r, c);
// }

// void inputArray(int arr[10][10], int r, int c){
//     int i, j;
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++){
//             printf("Enter data in (%d,%d) ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
// }
// void outputArray(int arr[10][10], int r, int c){
//     int i, j;
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//             printf("%d\t", arr[i][j]);
//         printf("\n");
//     }
// }
// void Addition(int arr1[][10], int arr2[10][10], int r, int c)
// {
//     int arr3[10][10];
//     int i, j;
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//         {
//             arr3[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }
//     printf("\nAddition of Two Matrix = \n");
//     outputArray(arr3,r,c);
// }

