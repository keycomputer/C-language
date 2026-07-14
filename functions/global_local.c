// #include<stdio.h>   // extern 
// int a = 10; // global variable -> program level  -> use anywhere in the program  
// void functionA()
// {
//     printf("A = %d \n", a);
// }
// int main()
// {
//     int a = 20 ; // local
//     {
//         int a = 30; // local 
//         {
//             int a = 40 ;
//             printf("A = %d \n", a);
//         }
//         printf("A = %d \n", a);
//     }
//     printf("A = %d \n", a);
//     functionA();
// }
// ?????????????????????????????????????????????????????????
/// global variable 
// #include<stdio.h>

// int a = 10 ;
// void increment()
// {
//     a = a + 1 ;
// }
// int main()
// {
//     increment();
//     printf("A = %d \n", a);
//     increment();
//     printf("A = %d \n", a);
//     increment();
//     printf("A = %d \n", a);
//     increment();
//     printf("A = %d \n", a);

// }

// local variable
#include<stdio.h>

void increment()
{
    int a = 10 ;
    a = a + 1 ;
    printf("A = %d \n", a);
}
int main()
{
    increment();
    // printf("A = %d \n", a); // error 
    increment();
    // printf("A = %d \n", a);  // error 
    increment();
    // printf("A = %d \n", a); // error 
    increment();
    // printf("A = %d \n", a); // error 

}
