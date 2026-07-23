// pointer    *   & 
// is a variable which stores an address 
// 8 bytes 
// any data type 


// #include<stdio.h>
// int main()
// {
//     int a=100;
//     printf("%u\n", &a);
//     printf("%d\n", *(&a)); //-> fetch /extract value from the address

// }
///////////////////////
/**
 * C program to get memory address using address of operator
 */
// #include <stdio.h>
// int main()
// {

//     char character = 'C';
//     int integer = 1;
//     float real = 10.4f;
//     long long biginteger = 989898989ll;

//     /* Print variable value with their memory address */
//     printf("Value of character = %c, Address of character = %u\n", character, &character);
//     printf("Value of integer = %d, Address of integer = %u\n", integer, &integer);
//     printf("Value of real = %f, Address of real = %u\n", real, &real);
//     printf("Value of biginteger = %lld, Address of biginteger = %u", biginteger, &biginteger);

//     return 0;
// }
///////////////////////////////////////////

/**
 * C program to add two number using pointers
 */

// #include <stdio.h>
// int main()
// {
//     int num1, num2, sum;
//     int *ptr1, *ptr2;

//     ptr1 = &num1; // ptr1 stores the address of num1
//     ptr2 = &num2; // ptr2 stores the address of num2

//     printf("Enter any two numbers: ");
//     scanf("%d%d", ptr1, ptr2);

//     sum = *ptr1 + *ptr2;

//     printf("Sum = %d", sum);

//     return 0;
// }

// Write a C program to swap two numbers using pointers.
// Write a C program to input and print array elements using pointer.
// Write a C program to copy one array to another using pointers.
// Write a C program to search an element in array using pointers.
