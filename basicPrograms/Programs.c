// Under GCC Compiler (Linux)

// To compile the program under GCC run the following command

// gcc helloworld.c -o helloworld


///////////////////////////////////////////////////////////

// /* C program to print Hello World! */
 
// #include <stdio.h>
// int main()
// {
//     printf("Hello World!");
 
//     return 0;
// }
///////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()
// {
//     int a, b;
//     printf("enter two numbers ");
//     scanf("%d_%d", &a,&b);
//     printf("a = %d b= %d",a, b);
//     return 0;
// }



///////////////////////////////////////////////////////////

// Calculate Sum
// #include <stdio.h>

// int main() {
//     int num1, num2, sum;

//     printf("Enter the first integer: ");
//     scanf("%d", &num1);
//     printf("\nEnter the second integer: ");
//     scanf("%d", &num2);
//     sum = num1 + num2;
    
//     printf("\nThe sum of %d and %d is: %d\n", num1, num2);

//     return 0;
// }

// ##############################################################
// C program to find subtraction of two integer number
// #include<stdio.h>

// int main()
// {
// 	int a,b,sub;

// 	//Read value of a
// 	printf("Enter the first no.: ");
// 	scanf("%d",&a);

// 	//Read value of b
// 	printf("Enter the second no.: ");
// 	scanf("%d",&b);

// 	//formula of subtraction
// 	sub= a-b;
// 	printf("subtract is = %d\n", sub);

// 	return 0;
// }
// ##########################################################
// /* c program find sum and average of two numbers*/
// #include <stdio.h>
 
// int main()
// {
//     int a,b,sum;
//     float avg;
 
//     printf("Enter first number :");
//     scanf("%d",&a);
//     printf("Enter second number :");
//     scanf("%d",&b);
 
//     sum=a+b;
//     avg= (float)(a+b)/2;
 
//     printf("\nSum of %d and %d is = %d",a,b,sum);
//     printf("\nAverage of %d and %d is = %f",a,b,avg);
 
//     return 0;
// }
/////////////////////////////////////////////////////////////

// C program to find quotient and remainder
// #include <stdio.h>

// int main()
// {
// 	int dividend, divisor;
// 	int quotient, remainder;
	
// 	printf("Enter dividend: ");
// 	scanf("%d",&dividend);
// 	printf("Enter divisor: ");
// 	scanf("%d",&divisor);
	
// 	quotient= dividend/divisor;
// 	remainder= dividend%divisor;
	
// 	printf("quotient: %d, remainder: %d\n",quotient,remainder);
	
// 	return 0;
// }
// #########################################################

// #include<stdio.h>
// int main()
// {
//     float basic, hra, incentive, total_monthly_salary;
//     int medical;

//     printf("enter monthly basic salary : ");
//     scanf("%f", &basic);
//     hra = basic *0.40 ; 
//     incentive = basic*0.15 ;
//     medical = 2500;
//     total_monthly_salary = basic + hra + incentive+ medical ;

//     printf("Basic Salary \t%0.2f\n", basic);
//     printf("HRA          \t%0.2f\n", hra);
//     printf("Incentive    \t%0.2f\n", incentive);
//     printf("Medical      \t%d\n",medical);
//     printf("------------------------\n");
//     printf("Total Salary \t%0.2f", total_monthly_salary);
// }



////////////////////////////////////////////////////////////
// C program to calculate Simple Interest
/* c program to calculate simple interest*/
// #include <stdio.h>
 
// int main()
// {
//     float amount,rate,time,si;
 
//     printf("Enter principal (Amount) :");
//     scanf("%f",&amount);
 
//     printf("Enter rate :");
//     scanf("%f",&rate);
 
//     printf("Enter time (in years) :");
//     scanf("%f",&time);
 
//     si=(amount*rate*time)/100;
 
//     printf("\nSimple Interest is = %f",si);
 
//     return 0;
// }
//////////////////////////////////////

// Circumference/Area of a Circle
// #include <stdio.h>

// #define PI 3.14159

// int main() {
//     float radius, area, circumference;
//     radius = 5;

//     // Calculate Area: PI * r * r
//     area = PI * radius * radius;
    
//     // Calculate Circumference: 2 * PI * r
//     circumference = 2 * PI * radius;

//     printf("\nArea of the circle: %.3f\n", area);
//     printf("\nCircumference of the circle: %.3f\n", circumference);

//     return 0;
// }
////////////////////////////////////////////////////
// Swapping Numbers

// #include <stdio.h>

// int main() {
//     int A, B, temp;
//     A = 10;
//     B = 20;

//     printf("\n--- Before Swap ---\n");
//     printf("A = %d, B = %d\n", A, B);
    
//     // The three-step swap logic
//     temp = A;  // Step 1: Store original A
//     A = B;     // Step 2: Overwrite A with B's value
//     B = temp;  // Step 3: Overwrite B with the original A (stored in temp)

//     printf("\n--- After Swap ---\n");
//     printf("A = %d, B = %d\n", A, B);

//     return 0;
// }
////////////////////////////////////////////////
// Without Third Variable

// #include <stdio.h>

// int main() {
//     int A, B;
//     A = 10;
//     B = 20;
//     printf("\n--- Before Swap ---\n");
//     printf("A = %d, B = %d\n", A, B);
    
//     // The arithmetic swap logic
//     A = A + B; // A now holds the sum of original A and B
//     B = A - B; // B now holds (A + B) - B, which is original A
//     A = A - B; // A now holds (A + B) - (original A), which is original B

//     printf("\n--- After Swap ---\n");
//     printf("A = %d, B = %d\n", A, B);

//     return 0;
// }

////////////////////////////////////////////////

// ASCII Value
// #include <stdio.h>

// int main() {
//     char ch;

//     printf("\nEnter a character: ");
//     scanf(" %c", &ch); // Note the space to handle whitespace
//     printf("\nThe character entered is: %c\n", ch);
//     printf("\nThe ASCII value of '%c' is: %d\n", ch, ch);

//     return 0;
// }

/////////////////////////////////////////////////

// /*C program to print size of variables using sizeof() operator.*/
 
// #include <stdio.h>
 
// int main()
// {
     
//     char    a       ='A';           
//     int     b       =120;
//     float   c       =123.0f;
//     double  d       =1222.90;
//     char    str[]   ="Hello";
 
//     printf("\nSize of a: %d",sizeof(a));
//     printf("\nSize of b: %d",sizeof(b));
//     printf("\nSize of c: %d",sizeof(c));
//     printf("\nSize of d: %d",sizeof(d));
//     printf("\nSize of str: %d",sizeof(str));
 
//     return 0;
// }
// #####################################################################

/// character based  ////
// ASCII  
// A - 65 Z - 90 
// a = 97 z - 122
// 0- 48 
// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter any character ");
//     scanf("%c" , &ch );
//     printf("character = %c and ASCII code  = %d", ch, ch);
// }
// ############### character increase and decr 

// #include <stdio.h>
// int main() 
// {
//     char ch;
//     printf("Enter any character ");
//     scanf("%c" , &ch );
//     printf("character = %c \nnext character = %c", ch , ch+1);
// }


// ###############  consversion(upper to lower , lower to upper )
// upper to lower = + 32 
// lower to upper = -32 
// #include <stdio.h>
// int main() 
// {
//     char ch;
//     printf("Enter lower case  character ");
//     scanf("%c" , &ch );
//     printf("character = %c \n upper = %c", ch , ch-32);
// }