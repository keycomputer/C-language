
// LOOPING IN C LANGUAGE
// 1. for 
// 2. while 
// 3. do while

// for, while -> entry 
// do while -> exit

// for syntax 
// for( init ; cond ; incr/decr)
// {
//     // statements
// }

// print 1 to 10 
// i=1, i<=10 yes, print 1, i= 2 
// i=2 , i<=10 yes, print 2, i=3 ..... 
// i=10 , i<=10 yes, print 10 i=11 
// i =11 i<=10 NO STOP
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i = 1 ; i<=10; i=i+1)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// while loop syntax
// init 
// while(cond)
// {
//     statement 
//     incr/decr 
// }
// #include<stdio.h>
// int main()
// {
//     int i =1 ;
//     while(i <= 10 )
//     {
//         printf("%d  ",i);
//         i=i+1;
//     }
//     return 0;
// }

// do while

// init 
// do {
//     statements 
//     incr / decr 
// }while(cond ); 

// #include<stdio.h>

// int main()
// {
//     int i=1;
//     do
//     {
//         printf("%d  ", i);
//         i = i + 1;
//     } while ( i<= 10);
//     return 0 ;
// }
/////////////////////////////////////////////////////////////
//do while -> condition false (atleast One time )
// #include<stdio.h>
// int main()
// {
//     int i = 100;
//     do{
//         printf("%d ", i);
//         i = i+1;
//     }while(i<=10); // 101 <=10 ;False 
//     return  0;
// }
// for or while ( cond False -> NO iteration)

// Quest1 . difference between entry and exit loop

// // print 1 to n(natural number ) using for loop
// #include<stdio.h>
// int main()
// {
//     int i, n ;
//     printf("enter nth number ");
//     scanf("%d", &n);
//     // (init ; cond ; incr/decr)
//     for(i=1 ; i<=n ; i= i+1)
//     {
//         printf("Hello ");
//     }
//     return 0;
// }
// print 1 to n(natural number ) using while loop
// #include<stdio.h>
// int main()
// {
//     int i, n ;
//     printf("enter nth number ");
//     scanf("%d", &n);
//     i = 1 ;
//     while(i<=n)
//     {
//         printf("%d ", i );
//         i++; //(++ increment operator, by 1 )
//         // i = i+1 , i+=1
//     }
//     return 0;
// }
// print 1 to n(natural number ) using do while loop
// #include<stdio.h>
// int main()
// {
//     int i, n ;
//     printf("enter nth number ");
//     scanf("%d", &n);
//     i = 1 ;
//     do
//     {
//         printf("%d ", i );
//         i++; //(++ increment operator, by 1 )
//         // i = i+1 , i+=1
//     }while(i<=n);
//     return 0;
// }
/////////////////////////////////////////////////////////////////////////

/// while variation 
// infinite  
// #include<stdio.h>
// int main()
// {
//     while(1) // 100 , -100 
//     {
//         printf("hello ");
//     }
// }
//////  logical ///////
// #include<stdio.h>
// int main()
// {
//     int i = 1;
//     while( i <=10 ) // 100 , -100 
//     {
//         printf("hello ");
//         i -=1 ; // i= i-1 , i--;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i = 100;
//     while( i >=10 ) 
//     {
//         printf("hello ");
//         i +=1 ; // i= i-1 , i--;
//     }
// }

//////////////////////////////////////////////////////////////
// Print Number 10 to 1 
// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("for loop ");
//     for(i=10;i>=1;i--) //i=i-1 i-=1 //10 >= 1, 9 >= 1 , 1>=1, 0>=1 STOP
//         printf("%d ", i);
//     printf("\nWhile loop ");
//     i= 10;
//     while(i>=1)
//     {
//         printf("%d ", i);
//         i--;
//     }
// }

// Print odd numbers from 1 to 20
// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("for loop ");
//     for(i=1;i<=20;i+=2 ) // i=i+2 
//         printf("%d ", i);
//     printf("\nWhile loop ");
//     i= 1;
//     while(i<=20)
//     {
//         printf("%d ", i);
//         i+=2;
//     }
// }
// print Even from 1 to 20  ??

/// print even or odd from  1 to n
#include<stdio.h>
int main()
{
    int i , n ;
    printf("enter n  ");
    scanf("%d", &n);
    for (i=1; i<=n;i++)
    {
        if (i % 2 == 0)
            printf("%d is Even\n", i);
        else    
            printf("%d is Odd\n", i);
    }
    i=1;
    while(i<=n)
    {
        if (i % 2 == 0)
            printf("%d is Even\n", i);
        else    
            printf("%d is Odd\n", i);
        i++;
    }
} 
///////////////////////////////////////////////////////////////////
//C program to print all uppercase alphabets 


// C program to print all lowercase alphabets 

// C program to read an integer and print its multiplication table.



// Sum of First N Integers


//Sum Of All Even Numbers

// Sum of All Even and Odd Numbers 


// Multiplication Table


//Factorial

// Power of a Number


//Calculator using While loop/Do-while 

//Count Digits

//Reverse a Number

// Check for Palindrome

//C program to print all prime numbers from 1 to N.

//C program to check whether number is POSITIVE, NEGATIVE or ZERO until user doesn't want to exit.



/**
 * C program to find HCF of two numbers
 */

// #include <stdio.h>

// int main()
// {
//     int i, num1, num2, min, hcf=1;

//     /* Input two numbers from user */
//     printf("Enter any two numbers to find HCF: ");
//     scanf("%d%d", &num1, &num2);

//     /* Find minimum between two numbers */
//     min = (num1<num2) ? num1 : num2;

//     for(i=1; i<=min; i++)
//     {
//         /* If i is factor of both number */
//         if(num1%i==0 && num2%i==0)
//         {
//             hcf = i;
//         }
//     }

//     printf("HCF of %d and %d = %d\n", num1, num2, hcf);

//     return 0;
// }