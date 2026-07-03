
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
// do while -> condition false (atleast One time )
//  #include<stdio.h>
//  int main()
//  {
//      int i = 100;
//      do{
//          printf("%d ", i);
//          i = i+1;
//      }while(i<=10); // 101 <=10 ;False
//      return  0;
//  }
//  for or while ( cond False -> NO iteration)

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
// #include<stdio.h>
// int main()
// {
//     int i , n ;
//     printf("enter n  ");
//     scanf("%d", &n);
//     for (i=1; i<=n;i++)
//     {
//         if (i % 2 == 0)
//             printf("%d is Even\n", i);
//         else
//             printf("%d is Odd\n", i);
//     }
//     i=1;
//     while(i<=n)
//     {
//         if (i % 2 == 0)
//             printf("%d is Even\n", i);
//         else
//             printf("%d is Odd\n", i);
//         i++;
//     }
// }
///////////////////////////////////////////////////////////////////
// C program to print all uppercase alphabets
//  #### using ASCII code 65  - 90
//  #include<stdio.h>
//  int main()
//  {
//      int  i = 65 ;
//      while(i<=90)
//      {
//          printf("%c ", i);
//          i++;
//      }
//      printf("\n");
//      for(i=65;i<=90;i++)
//          printf("%c ", i);
//  }
////// using char
// #include<stdio.h>
// int main()
// {
//     int i;
//     char ch = 'A';
//     for(i=0;i<26;i++)
//         printf("%c ", ch+i);
//     return 0;
// }
// C program to print all lowercase alphabets
// #include<stdio.h>
// int main()
// {
//     int i;
//     char ch = 'a';
//     for(i=0;i<26;i++)
//         printf("%c ", ch+i);
//     return 0;
// }
// C program to read an integer and print its multiplication table.
// #include<stdio.h>
// int main()
// {
//     int i, num;
//     printf("enter number ");
//     scanf("%d", &num);
//     for(i=1 ;i <= 10;i++)
//         printf("%d X %d = %d\n", num, i, i*num);
//     /*
//     i=1;
//     while(i<=10)
//     {printf("%d ", i*num);
//     i++;
//     }
//     */
//     return 0;
// }

// Sum of First N Integers
/*
0 + 1 = 1
1 + 2 = 3
3 + 3 = 6
6 + 4 = 10
10 + 5 = 15
*/
// #include<stdio.h>
// int main()
// {
//     int i, sum=0, n ;
//     printf("Enter n(natural number ) : ");
//     scanf("%d", &n);
//     i=1;
//     while(i<=n)
//     {
//         sum = sum + i ;
//         i++;
//     }
//     printf("Sum = %d", sum);
// }

// Sum Of All Even Numbers
//  #include<stdio.h>
//  int main()
//  {
//      int i, sume=0 , n;
//      printf("enter n ");
//      scanf("%d", &n);
//      for(i=1;i<=n;i++)
//      {
//          if (i % 2 == 0)
//              sume+=i;
//      }
//      printf("sum of even = %d ",sume);
//      return 0;
//  }
//  Sum of All Even and Odd Numbers
//  #include<stdio.h>
//  int main()
//  {
//      int i, sume=0, sumo=0 , n;
//      printf("enter n ");
//      scanf("%d", &n);
//      for(i=1;i<=n;i++)
//      {
//          if (i % 2 == 0)
//              sume+=i;
//          else
//              sumo+=i;
//      }
//      printf("sum of even = %d \nsum of odd = %d",sume, sumo);
//      return 0;
//  }
// Factorial
//  product of n natural numbers
//  5! => 1 * 2 * 3 * 4 * 5 , 5 * 4 * .....
//  #include<stdio.h>
//  int main()
//  {
//      int i, n, prod = 1 ;
//      printf("enter n ");
//      scanf("%d", &n);
//      // i=1;
//      // while(i<=n)
//      // {
//      //     prod *= i;  // prod = prod * i ;
//      //     i++;
//      // }
//      i= n;
//      while(i >= 1)
//      {
//          prod *=i;
//          i--;
//      }
//      printf("%d! = %d", n, prod);
//  }

// Power of a Number
// #include<stdio.h>
// int main()
// {
//     int i, num, pow, result = 1;
//     printf("enter number and power ");
//     scanf("%d%d",&num , &pow);
//     for(i=1; i<=pow; i++)
//     {
//         result = result * num ;
//     }
//     printf("Result = %d", result);
// }

// factors
// #include<stdio.h>
// int main()
// {
//     int num  , i ;
//     printf("enter any number ");
//     scanf("%d", &num);
//     i= 1;
//     while(i<=num)
//     {
//         if (num % i == 0 ) // num = 6, i = 1, 2, 3, 4X, 5X, 6
//             printf("%d ", i);
//         i++;
//     }
// }

// perfect number  (important)
// sum of factors
// num 6
// factor 1,2,3,6 = sum = 12
// num*2 == sum -> perfect
// #include<stdio.h>
// int main()
// {
//     int num  , i ,sum = 0 ;
//     printf("enter any number ");
//     scanf("%d", &num);
//     for(i=1 ; i<=num; i++)
//     {
//         if (num % i == 0 )
//         { // num = 6, i = 1, 2, 3, 4X, 5X, 6
//             printf("%d ", i);
//             sum = sum + i;
//         }
//     }
//     if (num*2 == sum)
//         printf("Perfect Number ");
//     else
//         printf("Not a perfect number ");
// }
// ???????????????????????????????????????????????????
// Calculator using While loop/Do-while
// #include <stdio.h>
// #include <stdlib.h>
// // Menu - driven Program
// int main()
// {
//     int num1, num2, option, result;
//     while (1)   // do 
//     {
//         printf("\n\n1. Addition\n");
//         printf("2. Substraction\n");
//         printf("3. Multiplication\n");
//         printf("4. Division\n");
//         printf("0. Exit\n");
//         printf("Enter option ");
//         scanf("%d", &option);
//         if (option == 0)
//         {
//             printf("Bye Bye");
//             exit(0); // stop
//         }
//         else if (option > 4 || option < 1)
//             printf("Invalid option entered ");
//         else if (option == 1)
//         {
//             printf("enter two numbers  for Addition :: ");
//             scanf("%d%d", &num1, &num2);
//             result = num1 + num2;
//             printf("Addition = %d ", result);
//         }
//         else if (option == 2)
//         {
//             printf("enter two numbers  for Subtraction :: ");
//             scanf("%d%d", &num1, &num2);
//             result = num1 - num2;
//             printf("Subtraction = %d  ", result);
//         }
//         else if (option == 3)
//         {
//             printf("enter two numbers  for Multiplication :: ");
//             scanf("%d%d", &num1, &num2);
//             result = num1 * num2;
//             printf("Multi = %d  ", result);
//         }
//         else if (option == 4)
//         {
//             printf("enter two numbers  for Division :: ");
//             scanf("%d%d", &num1, &num2);
//             // result = num1 / num2;
//             printf("Division = %f ", (float)num1 / num2 ); // float / int // type casting 
//         }
//     } // while(1);
// }
// ????????????????????????????????????????????????????
/*
count digit 
12345 
12345 > 0 Yes , count = 1 , 12345 /10 
1234  > 0 Yes, count = 2 , 1234/ 10 
123 > 0 Yes, count = 3 , 123 /10 
12 > 0 yes, count = 4 , 12/10 
1 > 0 , yes , count= 5 , 1/10 => 
0 > 0 NO STOP
*/
// (important - 4 programs )
// Count Digits
// #include <stdio.h>
// int main()
// {
//     int num , count =0; 
//     printf("enter any number ");
//     scanf("%d", &num);
//     while(num  > 0)
//     {
//         ++count;
//         num /= 10 ; // num = num /10 
//     }
//     printf("Count of digits = %d", count);

//     /*
//     for (  ; num > 0 ; num/=10)     // for ( num ; num > 0 ; num/=10)
//         count++:

//     */
// }

// Reverse a Number

// Check for Palindrome
/*
rev =  0 
    1234 
    1234 % 10 -> 4 
    1234 /10 -> 123 
    rev * 10 + remainder 
    0*10 + 4 => 4 

    123 % 10 -> 3 
    123 / 10 -> 12 
    4 * 10 + 3 => 43 

    12 % 10 -> 2 
    12 /10 -> 1 
    43 *10 + 2 => 432 

    1 % 10 -> 1 
    1 / 10 -> 0  STOP
    432 *10 + 1 => 4321


    12321 
    12321  NITIN 
*/
// #include<stdio.h>
// int main()
// {
//     int num, rev=0, rem ;
//     printf("Enter any number :: ");
//     scanf("%d", &num);

//     while(num != 0)  // while(num > 0)
//     {
//         rem = num % 10 ;
//         rev = rev * 10 + rem ;
//         num = num / 10;   // num /=10 ;
//     }
//     printf("Reverse = %d", rev);
//     return 0;
// }

////////////////////////////////////
// Palindrome // 
// #include<stdio.h>
// int main()
// {
//     int num, rev=0, rem , num2;
//     printf("Enter any number :: ");
//     scanf("%d", &num);
//     num2 = num;
//     while(num != 0)  // while(num > 0)
//     {
//         rem = num % 10 ;
//         rev = rev * 10 + rem ;
//         num = num / 10;   // num /=10 ;
//     }  // num = 0 
//     if ( rev ==  num2 )
//         printf("Palindrome ");
//     else
//         printf("Not a Palindrome ");
//     return 0;
// }
// C program to check prime number
// #include<stdio.h>
// int main()
// {
//     // using factor count 
//     int num , i , count =0 ; 
//     printf("Enter any number : ");
//     scanf("%d", &num);

//     for(i=1; i<=num;i++){
//         if (num % i ==0 )
//             count++; 
//     }
//     if (count == 2)
//         printf("Prime number ");
//     else
//         printf("not a prime number "); 
// }
//////////////////////////////////////////
// #include<stdio.h>
// int main()
// {
// // using divisibility
//     int num , i ; 
//     printf("Enter any number : ");
//     scanf("%d", &num);
    
//     for(i=2; i<num;i++){        // for(i=2; i<=num/2 ;i++ )// SQRT(NUM)
//         if (num % i ==0 )
//             break ;
//     }
//     // 11 -> 2 , 10 11STOP 
//     // 12 -> 2 , 11 2STOP 
//     if (i == num)
//         printf("Prime number ");
//     else
//         printf("not a prime number "); 
// }
// C program to sum numbers if POSITIVE ... ,exit if user enters ZERO 

// #include<stdio.h>
// int main()
// {
//     int sum =0, num;

//     for( ; ;) // infinite // while(1) // while(10) // for(;1 ;)
//     {
//         printf("Enter any number ");
//         scanf("%d", &num );
//         if (num == 0 )
//             break ;
//         else if(num > 0 )
//             sum = sum + num;       
//     }
//     printf("Sum = %d ", sum );
// }
////////////////////////////////////
/**
 * C program to find HCF of two numbers
 */
// #include <stdio.h>
// int main()
// {
//     int i, num1, num2, min, hcf=1;
//     printf("Enter any two numbers to find HCF: ");
//     scanf("%d%d", &num1, &num2);
//     /* Find minimum between two numbers */
//     if(num1 > num2)
//         min = num2;
//     else
//         min = num1 ;
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

// fibonacci (important )
// 0 1 1 2 3 5 8 13 
/*
n1   n2   sum(n1+n2)
0    1     1 
1    1     2 
1    2     3 
2    3     5 
3    5     8 
*/

// #include<stdio.h>
// int main()
// {
//     int n1 =0, n2=1, sum ;
//     int n, i;
//     printf("Enter nth Term ");
//     scanf("%d", &n);

//     for(i=1;i<=n;i++)
//     {
//         printf("%d ", n1);
//         sum = n1 + n2 ; 
//         n1=  n2 ;
//         n2 = sum; 
//     }
// }
/////////////////////////////////////////////////////////