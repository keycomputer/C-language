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
// pointing toward the memory area
// #include<stdio.h>
// int main()
// {
//     int a = 100; 
//     int*ptr ;
//     ptr = &a;  // int *ptr = &a ; 
//     printf("%u  %u \n", &a , ptr) ;
//     printf("%d %d \n", a , *ptr); // *(&a)
//     printf("%u", &ptr);
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
/// changes 
// #include<stdio.h>
// int main()
// {
//     int num ;
//     int *ptr; 
//     printf("enter any number ");
//     scanf("%d", &num);
//     ptr = &num ;
//     num = num + 10 ;
//     printf("After changes in num - %d , %d \n", num, *ptr);
//     *ptr = *ptr+100;
//     printf("After changes in num - %d , %d ", num, *ptr);
//     return 0 ;
// }

// ############################################
// * C program to add two number using pointers
// #include <stdio.h>
// int main()
// {
//     int num1, num2, sum;
//     int *ptr1, *ptr2;
//     ptr1 = &num1; // ptr1 stores the address of num1
//     ptr2 = &num2; // ptr2 stores the address of num2
//     printf("Enter any two numbers: ");
//     scanf("%d%d", ptr1, ptr2); // scanf("%d%d", &num1, &num2);
//     sum = *ptr1 + *ptr2;

//     printf("Sum = %d", sum);
//     return 0;
// }
/////////////////// NULL POINTER //////////////////
// #include <stdio.h>
// int main()
// {
//     // int *ptr;
//     // printf("%d ", *ptr); // garbage value 
//     int *ptr = NULL;
//     printf("%d ", *ptr); 
// }
////////////////// Void pointer ///////////////
// #include <stdio.h>
// int main()
// {
//     int a = 10 ;
//     float f = 100.456f;
//     long l = 123.55L;
//     char ch = 'A';
//     int *iptr; 
//     float *fptr;
//     long *lptr;
//     char *cptr; 

// }
// #include <stdio.h>
// int main()
// {
//     int a = 10 ;
//     float f = 100.456f;
//     long l = 123.55L;
//     char ch = 'A';
//     void *ptr;
//     ptr = &a ;
//     printf("integer Value = %d\n", *(int*)ptr); 
//     ptr = &f;
//     printf("float value  = %0.2f\n",*(float*)ptr );
//     ptr = &l;
//     printf("long value = %ld\n", *(long*)ptr);
//     ptr= &ch;
//     printf("character value = %c \n", *(char*)ptr);
// }
//////////////  Call by reference ////////////////
// #include<stdio.h>
// void increment(int *) ; 
// int main()
// {
//     int a ;
//     printf("Enter any value :: ");
//     scanf("%d", &a);
//     printf("Before Function call = %d\n", a );
//     increment (&a);
//     printf("After Function call = %d\n", a );

// }
// void increment(int *ptr)
// {
//     *ptr = *ptr + 1 ;
// }

// Write a C program to swap two numbers using pointers.
// #include<stdio.h>
// int swap(int *a, int *b)
// {
//     int c=  *a;
//     *a = *b ;
//     *b = c ;
// }
// int main()
// {
//     int num1 = 10, num2= 20;
//     printf("Before swapping num1 = %d , num2 = %d \n", num1, num2);
//     swap(&num1, &num2);
//     printf("After swapping num1 = %d , num2 = %d \n", num1, num2);    
// }
////////////////////////////////////////////////////////////

///////////// Array addressing /////////////////////////////

// #include<stdio.h>
// int main()
// {
//     // long long arr[] = {11,12,13,14,15};
//     // int n;
//     // // Base Address 
//     // printf("Base address using arr = %u\n", arr);
//     // printf("Base address using indexing = %u\n", &arr[0]);
//     // printf("1st index address = %u , %u ", arr+1, &arr[1]);

//     int arr[] = {11,12,13,14,15}, n= 5;
//     int *ptr;
//     ptr = arr;  // &arr[0] 
//     printf("0 index value = %d , %d\n", *ptr, arr[0]);
//     ptr= ptr+1;  // ptr++   ++ptr
//     printf("1 index value = %d , %d\n", *ptr, arr[1]);
// }




// Write a C program to input and print array elements using pointer.
// #include<stdio.h>
// int main()
// {
//     int arr[100], n;
//     int *ptr, i ;
//     ptr = arr;
//     printf("Enter no of elements ");
//     scanf("%d",&n); 
//     // input
//     for(i=0;i<n;i++)
//     {
//         printf("Enter data :: ");
//         scanf("%d", ptr);
//         ptr++;
//     }
//     ptr = arr; 
//     for(i=0;i<n;i++)
//         printf("%d\t", *(ptr++));
// }
// Write a C program to copy one array to another using pointers.
#include<stdio.h>
int main()
{
    int arr1[]= {11,12,13,14,15};
    int arr2[5];
    int *ptr1, *ptr2, i ;
    ptr1 = arr1;
    ptr2 = arr2;
    for(i=0;i<5;i++)
    {
        *ptr2 = *ptr1 ; // copy content 
        ptr1++;
        ptr2++; 
    }
    ptr2= arr2;
    for(i=0;i<5;i++)
        printf("%d\t", *(ptr2++));
}

// Write a C program to search an element in array using pointers.
