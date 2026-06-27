
// print 1 to 10 
// #include<stdio.h>
// int main()
// {
//     int i;
//     // (init ; cond ; incr/decr)
//     for(i=1 ; i<=10 ; i= i+1)
//     {
//         printf("Hello ");
//     }
//     return 0;
// }


// print 1 to n
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


// Print Number 10 to 1 



// Print odd numbers from 1 to 20

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