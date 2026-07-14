// 1. // no parameter , no return 

// # Example 1 
// #include<stdio.h>
// void display()  // declaration / prototype 
// {                // defination
//     printf("1. add the data \n");
//     printf("2. delete the data \n");
//     printf("3. display data \n");
//     printf("4. EXIT\n");
// }
// int main()
// {
//     display(); // function call 
//     display(); 
// }

// # Example 2
// #include<stdio.h>
// void addition()
// {
//     int a, b ;
//     printf("enter any two numbers ");
//     scanf("%d%d", &a, &b);
//     printf("Sum =  %d\n", a+b);
// }
// int main()
// {
//     addition();
// }

// # Example 3
// #include<stdio.h>
// void factorial()
// {
//     int a , fact = 1;
//     printf("enter any number ");
//     scanf("%d", &a);
//     for(int i=1;i<=a;i++)
//         fact = fact * i;
//     printf("Factorial  =  %d\n", fact);
// }
// int main()
// {
//     factorial();
// }
// # Example 4
//return statement 
// #include<stdio.h>
// void primeNumber()
// {
//     int num ;
//     printf("enter any number ");
//     scanf("%d", &num );
//     // for(int i=2;i<num;i++)
//     // {
//     //     if (num % i == 0)
//     //     {
//     //         printf("Not a prime number ");
//     //         return;
//     //     }
//     // }
//     // printf("Prime number ");
//     int i;
//     for(i=2;i<num;i++)
//     {
//         if (num % i == 0)
//         {
//             printf("Not a prime number ");
//             break;
//         }
//     }
//     if (i==num)
//         printf("Prime number ");
// }
// int main()
// {
//     primeNumber();
// }
// ######################################
// 2. // yes parameter , no return 
// #include<stdio.h>
// void factorial(int number)
// {
//     int fact= 1;
//     for(int i=1;i<=number;i++)
//         fact *= i;
//     printf("Factorial = %d ",fact);
// }
// int main()
// {
//     int number;
//     printf("enter any number ");
//     scanf("%d", &number);
//     factorial(number);
// }
////// call by value ###################

// #include<stdio.h>
// void swap(int a, int b)
// {
//     int c  = a ;
//     a = b ;
//     b = c ;
//     printf("Inside Function a = %d and b= %d\n", a, b);
// }
// int main()
// {
//     int num1, num2;
//     printf("Enter two numbers ", &num1,&num2);
//     scanf("%d%d", &num1, &num2);
//     printf("Main Function num1 = %d and num2 = %d\n", num1, num2);
//     swap(num1, num2);
//     printf("After Swap Function num1 = %d and num2 = %d\n", num1, num2);
// }

// ############################################
// 3. yes return type , no parameter
// #include<stdio.h>
// long int factorial()
// {
//     long int num, fact=1;
//     printf("Enter number ");
//     scanf("%ld",&num);

//     for(int i=1;i<=num;i++)
//         fact = fact * i ;
//     return fact;
// }
// int main()
// {
//     long int result;
//     result = factorial(); // functon call 
//     printf("Factorial = %ld ", result);
//     return 0 ;
// }

// ############################################
// 4. yes return type, yes parameter 
// #include<stdio.h>
// long int factorial(long int num)
// {
//     long int fact = 1;
//     for(int i=1;i<=num;i++)
//         fact = fact * i ;
//     return fact;
// }
// int main()
// {
//     long int result;
//     long int num;
//     printf("Enter number ");
//     scanf("%ld",&num);
//     result = factorial(num); // functon call 
//     printf("Factorial = %ld ", result);
//     return 0 ;
// }


// ###################################################################
// ###################################################################
// Prototyping 
// Example 1 
// void factorial(int);  // declaration / prototype 
// int main()
// {
//     int num=5;
//     factorial(num);
// }
// void factorial(int num)
// {
//     int fact = 1 ;
//     for(int i=1;i<=num;i++)
//         fact = fact * i ;
//     printf("Factorial = %d ", fact);
// }

// Example 2
// #include<stdio.h>
// void addition(int, int);  // prototype 
// void substraction(int , int);  // prototype 

// int main()
// {
//     int num1 = 100, num2 = 50 ;
//     addition(num1, num2);
//     substraction(num1, num2);
// }
// void addition(int a, int b)
// {
//     printf("Sum = %d\n", a+b);
// }
// void substraction(int a, int b){
// printf("Sub = %d\n", a-b);
// }







// Write a C program to find diameter, circumference and area of circle using functions.
