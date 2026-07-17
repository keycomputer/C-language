
// Example 1 
// Declaration

// #include<stdio.h>
// int main()
// {   
//     float arr[5];  // 5 elements from 0 to 4 
//     int arr2[100] ; // 100 elements from 0 to 99 
    
//     //////
//     float arr3[5] = {56,78,98,83,55};
//     float arr4[] = {56,78,98,83,55};  // size is 5 
//     ///////
//     float arr5[100] = {56,78,98,83,55}; // size is 100, elements update -5 , 95 garbage 
// }

////////////////////////////////
// Example 2 
// input output
// #include<stdio.h>
// int main()
// {  
//     int arr[100] , n ,i ;
//     printf("Enter number of elements :   ");
//     scanf("%d", &n);  // 

//     // input
//     for(i=0;i<n;i++)
//     {
//         printf("Enter element in %d :: ", i );
//         scanf("%d", &arr[i]); 
//     }
//     // output 
//     for(i=0;i<n;i++)
//         printf("%d\t", arr[i]);
//     return 0;
// }
////////////////////////////////
// Example 3 
// Address 
// #include<stdio.h>
// int main()
// {  

//     int arr[5];
//     printf("Base Address = %u \n", arr);
//     printf("0 index Address = %u\n", &arr[0]);
//     printf("1 index Address = %u\n", &arr[1]);
//     printf("2 index Address = %u\n", &arr[2]);
//     printf("3 index Address = %u\n", &arr[3]);
//     printf("4 index Address = %u\n", &arr[4]);

// ///////////////////// Arithmetic 
//     printf("Address of arr + 2 = %u\n", arr+2);  //  add 2 index  // 8 bytes forward 
//     printf("Address of arr - 2 = %u\n", arr-2);   // 2 * 4bytes -> backwards 
//     return 0;
// }

////////////////////////////////////////////////
// Example 4
// Sum of all elements , percentage , -> grade 
// #include<stdio.h>
// int main()
// {  
//     int n = 5,i ;
//     float marks[5], sum =0, per;
//     char grade;
//     // input
//     for(i=0;i<n;i++)
//     {
//         printf("Enter marks in %d subject :: ", i+1 );
//         scanf("%f", &marks[i]); 
//     }
//     // sum  
//     for(i=0;i<n;i++)
//         sum = sum + marks[i] ; 
//     // output 
//     printf("Marks :: ");
//     for(i=0;i<n;i++)
//         printf("%f\t", marks[i]);
//     per = sum / 5 ;
//     printf("Sum = %f\n", sum);
//     printf("Per = %f\n", per);
//     return 0;
// }
/////////////////////////////////////////////////////
// Example 5 
// MAX 
// #include<stdio.h>
// int main()
// {
//     int arr[100], n ,i ,max  ;
//     printf("Enter number of elements :   ");
//     scanf("%d", &n);  // 
//     // input
//     for(i=0;i<n;i++)
//     {
//         printf("Enter element in %d :: ", i );
//         scanf("%d", &arr[i]); 
//     }
//     max = arr[0];  // max = INT_MIN 
//     for(i=1;i<n;i++)
//     {
//         if (arr[i] > max) 
//             max= arr[i]; 
//     }
//     printf("MAx = %d ", max);
// }
////////////////////////////////////////////////////////
// Example 6 
// Display Even and odd numbers 
// #include<stdio.h>
// int main()
// {
//     int arr[] = {45,67,54,32,32,56,87,89}, n = 8;
//     for(int i=0;i<8;i++)
//     {
//         if (arr[i] % 2 == 0 )
//             printf("%d is Even\n", arr[i]);
//         else
//             printf("%d is Odd\n", arr[i]);
//     }
// }
////////////////////////////////////////////////////////
// Example 7
// Display odd index values 
// #include<stdio.h>
// int main()
// {
//     int arr[] = {45,67,54,32,32,56,87,89}, n = 8;
//     for(int i=0;i<8;i++)
//     {
//         if (i % 2 == 1)
//             printf("%d \t",arr[i]);
//     }
// }
//////////////////////////////////////////////////////
// Example 8 
// Display numbers divisible by 5 
// #include<stdio.h>
// int main()
// {
//     int arr[] = {45,67,54,32,30,56,87,85}, n = 8;
//     for(int i=0;i<8;i++)
//     {
//         if (arr[i]% 5  == 0 )
//             printf("%d \t",arr[i]);
//     }
// }
//////////////////////////// Sum of  
// Example 9 
// sum of even and odd 

// Example 10 
// sun of number divisible by 5 

// Example 11 
// Cummulative sum 

// Example 12 
// Modification 

