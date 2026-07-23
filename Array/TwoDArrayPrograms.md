## C Program to read and print a RxC Matrix,
```
#include <stdio.h>
 
#define MAXROW      10
#define MAXCOL      10
 
int main()
{
    int matrix[MAXROW][MAXCOL];
    int i,j,r,c;
     
    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Cols :");
    scanf("%d",&c);
 
    printf("\nEnter matrix elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
 
    printf("\nMatrix is :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");   /*new line after row elements*/
    }
    return 0;   
}
```
## C program to read a matrix and find sum, product of all elements of matrix
```
#include <stdio.h>

#define MAXROW 10
#define MAXCOL 10

int main() {
  int matrix[MAXROW][MAXCOL];
  int i, j, r, c;
  int sum, product;

  printf("Enter number of Rows :");
  scanf("%d", &r);
  printf("Enter number of Cols :");
  scanf("%d", &c);

  printf("\nEnter matrix elements :\n");
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      printf("Enter element [%d,%d] : ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }

  /*sum and product of all elements*/
  /*initializing sun and product variables*/
  sum = 0;
  product = 1;
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      sum += matrix[i][j];
      product *= matrix[i][j];
    }
  }

  printf("\nSUM of all elements : %d \nProduct of all elements :%d", sum,
         product);
  return 0;
}

```
## Write a C program to read elements in two  matrices and add elements of both matrices.
```
#include <stdio.h>

#define SIZE 3 // Size of the matrix

int main()
{
    int A[SIZE][SIZE]; // Matrix 1
    int B[SIZE][SIZE]; // Matrix 2
    int C[SIZE][SIZE]; // Resultant matrix

    int row, col;

    /* Input elements in first matrix*/
    printf("Enter elements in matrix A of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input elements in second matrix */
    printf("\nEnter elements in matrix B of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    /*
     * Add both matrices A and B entry wise or element wise
     * and stores result in matrix C
     */
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            /* Cij = Aij + Bij */
            C[row][col] = A[row][col] + B[row][col];
        }
    }


    /* Print the value of resultant matrix C */
    printf("\nSum of matrices A+B = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}
```
## C program to read elements in a matrix and perform scalar multiplication of matrix. 

```
#include <stdio.h>

#define SIZE 3 // Maximum size of the array

int main()
{
    int A[SIZE][SIZE]; 
    int num, row, col;

    /* Input elements in matrix from user */
    printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input multiplier from user */
    printf("Enter any number to multiply with matrix A: ");
    scanf("%d", &num);

    /* Perform scalar multiplication of matrix */
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            /* (cAij) = c . Aij */
            A[row][col] = num * A[row][col];
        }
    }

    /* Print result of scalar multiplication of matrix */
    printf("\nResultant matrix c.A = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }

    return 0;
}

```
## C program to transpose a matrix
```
#include <stdio.h>
 
#define MAXROW      10
#define MAXCOL      10
 
int main()
{
    int matrix[MAXROW][MAXCOL];
    int i,j,r,c;
     
    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Cols :");
    scanf("%d",&c);
 
    printf("\nEnter matrix elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
 
    /*Transpose a matrix */
    printf("\nTranspose Matrix is :");
    for(i=0;i< c;i++)
    {
        for(j=0;j< r;j++)
        {
            printf("%d\t",matrix[j][i]);    /*print elements*/
        }
        printf("\n");   /*after each row print new line*/      
    }
    return 0;       
}

```
## Write a C program to read elements in two  matrices and multiply them. 
```
#include <stdio.h>

#define MAXROW 10
#define MAXCOL 10

/*User Define Function to Read Matrix*/
void readMatrix(int m[][MAXCOL], int row, int col) {
  int i, j;
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("Enter element [%d,%d] : ", i + 1, j + 1);
      scanf("%d", &m[i][j]);
    }
  }
}

/*User Define Function to Read Matrix*/
void printMatrix(int m[][MAXCOL], int row, int col) {
  int i, j;
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("%d\t", m[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int a[MAXROW][MAXCOL], b[MAXROW][MAXCOL], result[MAXROW][MAXCOL];
  int i, j, r1, c1, r2, c2;
  int sum, k;

  printf("Enter number of Rows of matrix a: ");
  scanf("%d", &r1);
  printf("Enter number of Cols of matrix a: ");
  scanf("%d", &c1);

  printf("\nEnter elements of matrix a: \n");
  readMatrix(a, r1, c1);

  printf("Enter number of Rows of matrix b: ");
  scanf("%d", &r2);
  printf("Enter number of Cols of matrix b: ");
  scanf("%d", &c2);

  printf("\nEnter elements of matrix b: \n");
  readMatrix(b, r2, c2);

  if (r1 == c2) {
    /*Multiplication of two matrices*/
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c1; j++) {
        sum = 0;
        for (k = 0; k < r1; k++) {
          sum = sum + (a[i][k] * b[k][j]);
        }
        result[i][j] = sum;
      }
    }

    /*print matrix*/
    printf("\nMatrix after multiplying elements (result matrix):\n");
    printMatrix(result, r1, c1);

  } else {
    printf("\nMultiplication can not be done.");
  }

  return 0;
}

```

## Write a C program to enter elements in two  matrices and check whether both matrices are equal or not.

```
#include <stdio.h>

#define SIZE 3 // Matrix size

int main()
{
    int A[SIZE][SIZE]; 
    int B[SIZE][SIZE];

    int row, col, isEqual;

    /* Input elements in first matrix from user */
    printf("Enter elements in matrix A of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input elements in second matrix from user */
    printf("\nEnter elements in matrix B of size %dx%d: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    /* Assumes that the matrices are equal */
    isEqual = 1;

    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            /*
             * If the corresponding entries of matrices are not equal
             */
            if(A[row][col] != B[row][col])
            {
                isEqual = 0;
                break;
            }
        }
    }

    if(isEqual == 1)
    {
        printf("\nMatrix A is equal to Matrix B");
    }
    else
    {
        printf("\nMatrix A is not equal to Matrix B");
    }

    return 0;
}
```
## C program to find sum of main diagonal elements of a matrix


##  Sum of all elements 
## Sum of Diagonals 

```
#include<stdio.h>
int main()
{
    int arr[100][100], r, c;
    int i, j, sum = 0 , sumMa=0 , sumMi=0; 
    printf("enter rows and cols :: ");
    scanf("%d%d", &r, &c);
    // input 
    for(i = 0 ; i < r ; i++)
    {
        for(j = 0; j < c; j++ )
        {
            printf("enter data in(%d, %d) : ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j]; 
        }
    }
    // output
    // for(i = 0 ; i < r ; i++)
    // {
    //     for(j = 0; j < c; j++ )
    //         printf("%d\t", arr[i][j]);
    //     printf("\n");
    // }
    printf("\nSum of All Elements = %d\n", sum);
    // Assume -> row == column 
    // Sum of Diagonal and output
    for(i = 0 ; i < r ; i++)
    {
        for(j = 0; j < c; j++ )
        {
            if(i == j )
            {
                printf("%d\t", arr[i][j]);
                sumMa+=arr[i][j];
            }
        }
    }
    printf("\nSum of Major Diagonal  = %d\n\n", sumMa);
    for(i = 0 ; i < r ; i++)
    {
        for(j = 0; j < c; j++ )
        {
            if(i + j == r-1  )
            {
                printf("%d\t", arr[i][j]);
                sumMi+=arr[i][j];
            }
        }
    }
    printf("\nSum of Minor Diagonal  = %d\n\n", sumMi);
}
```
##  Upper Triangle and Lower triangle 
```
#include<stdio.h>
int main()
{
    int arr[4][4]= { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
    int n= 4;
    int i, j; 
    // Display Upper Triangle 
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0; j < n; j++ )
        {
            if(i <= j )
                printf("%d\t", arr[i][j]);
            else
                printf(" \t");
        }
        printf("\n");
    }
    // Display Lower Triangle 
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0; j < n; j++ )
        {
            if(i >= j )
                printf("%d\t", arr[i][j]);
            else
                printf(" \t");
        }
        printf("\n");
    }
}
```