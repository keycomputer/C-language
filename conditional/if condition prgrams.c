// #include<stdio.h>

// int main()
// {
//     int num; 
//     printf("Enter any number ");
//     scanf("%d", &num);
//     if(num >100)
//     {
//         printf("Yes ");
//     }
//     else{
//         printf("No");
//     }
// }

//////////////////////////////////////////////////

// #include<stdio.h>
// int main()
// {
//     int num; 
//     printf("Enter any number ");
//     scanf("%d", &num);

//     if(num == 0 )
//     {
//         printf("Zero");
//     }
//     else if(num > 0 )
//     {
//         printf("Positive");
//     }
//     else {
//         printf("Negative");

//     }
// }

///////////////////////////////////////
// odd or even 
// #include<stdio.h>

// int main()
// {
//     int num; 
//     printf("Enter any number ");
//     scanf("%d", &num);
    
//     if (num % 2 == 0 )
//     {
//         printf("Even ");
//     }
//     else
//     {
//         printf("Odd"); 
//     }
// }

////////////////////////////////////
// divisible 
// #include<stdio.h>

// int main()
// {
//     int num1, num2; 
//     printf("Enter any number1 and number 2 ");
//     scanf("%d%d", &num1, &num2);
    
//     if (num1 % num2 == 0 )
//     {
//         printf("Yes, Divible");
//     }
//     else
//     {
//         printf("No "); 
//     }
// }
// /////////////////////////////////////////////
// // ###  grade ###
// // #include<stdio.h>

// // int main()
// // {
// //     double sub1, sub2, sub3;
// //     double sum , per ;
// //     char grade;
// //     printf("Enter three subject marks ");
// //     scanf("%lf%lf%lf", &sub1, &sub2, &sub3);
// //     sum = sub1 + sub2 + sub3;
// //     per = sum/210 *100 ; // percentage 70MAX Marks 

// //     // if (per >=80)
// //     //     grade = 'A';
// //     // else if (per >=60)
// //     //     grade = 'B';
// //     // else if (per >=40)
// //     //     grade = 'C';
// //     // else
// //     //     grade = 'D';
// // /////////////////////////////////////
// //     if (per <40)
// //         grade ='D';
// //     else if(per < 60)
// //         grade = 'C';
// //     else if (per < 80)
// //         grade = 'B';
// //     else
// //         grade ='A';

// //     printf("Total Marks = %0.2lf \n",sum);
// //     printf("Percentage  = %0.2lf \n", per);
// //     printf("Grade  = %c", grade);
    
// // }
// //////////////////////////////////////////

// // #include<stdio.h>

// // int main()
// // {
// //     double sub1, sub2, sub3;
// //     double sum , per ;
// //     char grade;
// //     printf("Enter three subject marks ");
// //     scanf("%lf%lf%lf", &sub1, &sub2, &sub3);

// //     // if (sub1 <0 || sub2 <0 || sub3<0)
// //     // {
// //     //     printf("Invalid marks entered ");
// //     //     return 0;
// //     // }

// //     sum = sub1 + sub2 + sub3;
// //     per = sum/210 *100 ; // percentage 70MAX Marks 

// //     if (per <=100 && per >=80)
// //         grade = 'A';
// //     else if (per >=60 && per <80 )
// //         grade = 'B';
// //     else if (per >=40 && per <60)
// //         grade = 'C';
// //     else if (per>=0 && per <40)
// //         grade = 'D';
// //     else
// //         grade = 'I';
   
// //     if (grade != 'I'){
// //     printf("Total Marks = %0.2lf \n",sum);
// //     printf("Percentage  = %0.2lf \n", per);
// //     printf("Grade  = %c", grade);
// //     }
// //     else
// //         printf("Inavlid data entered ");
// // }
// ///////////////////////////////////////////
// C program to find maximum between two numbers

// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &num1, &num2);
//     if(num1 > num2)
//     {
//         printf("%d is maximum", num1);        
//     }
//     else if(num2 > num1)
//     {
//         printf("%d is maximum", num2);
//     }
//     else 
//     {
//         printf("Both are equal");
//     }
//     return 0;
// }
// ////////////////////////////////////////////////
// #include<stdio.h>

// int main()
// {
//     int a , b , c;
//     scanf("%d%d%d", &a, &b, &c);
    
//      if (a  > b)
//      {
//         if (a > c)
//             printf("A ");
//         else    
//             printf("C");
//      }
//      else 
//      {
//         if ( b > c)
//             printf("B ");
//         else
//             printf("C");
//      }

        
// }
// ///////////////////////////////
// #include<stdio.h>

// int main()
// {
//     int a , b , c;
//     scanf("%d%d%d", &a, &b, &c);
    
//     if (a > b && a > c)
//         printf("A");
//     else if (b>a && b > c)
//         printf("B");
//     else if (c > a && c > b)
//         printf("C");
        
// }
// ////////////////////////////////////////////

// C program to read the height of a person and the print person is taller, dwarf, or average height person
// #include <stdio.h>

// int main()
// {
//     double height = 0;

//     printf("Enter Height (in centimetres): ");
//     scanf("%lf", &height);

//     if ((height >= 150.0) && (height <= 170.0)) {
//         printf("Person is average height person");
//     }
//     else if ((height > 170.0) && (height <= 195.0)) {
//         printf("Person is taller");
//     }
//     else if (height < 150.0) {
//         printf("Person is dwarf");
//     }
//     else
//         printf("Abnormal height \n");

//     return 0;
// }

// //////////////////////////////////////////////////////////////
// C Program to Check Leap Year 
// #include<stdio.h>

// int main()
// {

//     int year ;
//     printf("enter year ");
//     scanf("%d", &year );
//     if (year % 100 ==0 )
//     {
//         if(year % 400 == 0)
//             printf("leap year");
//         else 
//             printf("not a leap year ");
//     }
//     else
//     {
//         if (year % 4 == 0)
//             printf("leap year");
//         else 
//             printf("not a leap year ");
//     }
// }

// #include <stdio.h>

// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);

//     // Check year is leap or not using if else statement
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("%d is a leap year.", year);
//     } else {
//         printf("%d is not a leap year.", year);
//     }

//     return 0;
// }

// ///////////////////////////////////////////////
// Check Vowel or Consonant in C 
// #include <stdio.h>

// int main() {
    
//     // Declare character variable
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     // Check if the character is a vowel 
//     // using if-else
//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//         printf("%c is a vowel.", ch);
//     } else {
//         printf("%c is a consonant.", ch);
//     }

//     return 0;
// }

// //////////////////////////////////////////////////////////////////

//  program to check whether a character is alphabet or not
// #include <stdio.h>

// int main()
// {
//     char ch;
    
//     /* Input a character from user */
//     printf("Enter any character: ");
//     scanf("%c", &ch);
    

//     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//     {
//         printf("Character is an ALPHABET.");
//     }
//     else
//     {
//         printf("Character is NOT ALPHABET.");
//     }

//     return 0;
// }
// //////////////////////////////////////////////////////////////

// // C program to check whether a character is alphabet, digit or special character
// #include <stdio.h>

// int main()
// {
//     char ch;

//     /* Input character from user */
//     printf("Enter any character: ");
//     scanf("%c", &ch);


//     /* Alphabet check */
//     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//     {
//         printf("'%c' is alphabet.", ch);
//     }
//     else if(ch >= '0' && ch <= '9')
//     {
//         printf("'%c' is digit.", ch);
//     }
//     else 
//     {
//         printf("'%c' is special character.", ch);
//     }

//     return 0;
// }
// /////////////////////////////////////////////
// C program to check whether a character is Uppercase or Lowercase
// #include <stdio.h>

// int main()
// {
//     char ch;

//     /* Input character from user */
//     printf("Enter any character: ");
//     scanf("%c", &ch);


//     if(ch >= 'A' && ch <= 'Z')
//     {
//         printf("'%c' is uppercase alphabet.", ch);
//     }
//     else if(ch >= 'a' && ch <= 'z')
//     {
//         printf("'%c' is lowercase alphabet.", ch);
//     }
//     else
//     {
//         printf("'%c' is not an alphabet.", ch);
//     }

//     return 0;
// }
// ////////////////////////////////////////////////////////
// C program to enter week number and print day of week
// #include <stdio.h>

// int main()
// {
//     int week;

//     /* Input week number from user */
//     printf("Enter week number (1-7): ");
//     scanf("%d", &week);


//     if(week == 1)
//     {
//         printf("Monday");
//     }
//     else if(week == 2)
//     {
//         printf("Tuesday");
//     }
//     else if(week == 3)
//     {
//         printf("Wednesday");
//     }
//     else if(week == 4)
//     {
//         printf("Thursday");
//     }
//     else if(week == 5)
//     {
//         printf("Friday");
//     }
//     else if(week == 6)
//     {
//         printf("Saturday");
//     }
//     else if(week == 7)
//     {
//         printf("Sunday");
//     }
//     else
//     {
//         printf("Invalid Input! Please enter week number between 1-7.");
//     }

//     return 0;
// }

// ////////////////////////////////////////////////////////////
// C program to calculate profit or loss
// #include <stdio.h>

// int main()
// {
//     int cp,sp, amt; 
    
//     /* Input cost price and selling price of a product */
//     printf("Enter cost price: ");
//     scanf("%d", &cp);
//     printf("Enter selling price: ");
//     scanf("%d", &sp);
    
//     if(sp > cp)
//     {
//         /* Calculate Profit */
//         amt = sp - cp;
//         printf("Profit = %d", amt);
//     }
//     else if(cp > sp)
//     {
//         /* Calculate Loss */
//         amt = cp - sp;
//         printf("Loss = %d", amt);
//     }
//     else
//     {
//         /* Neither profit nor loss */
//         printf("No Profit No Loss.");
//     }

//     return 0;
// }

// /////////////////////////////////////////////////////////////
// C program to find all roots of a quadratic equation
// #include <stdio.h>
// #include <math.h> /* Used for sqrt() */

// int main()
// {
//     float a, b, c;
//     float root1, root2, imaginary;
//     float discriminant;
    
//     printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
//     scanf("%f%f%f", &a, &b, &c);
    
//     /* Find discriminant of the equation */
//     discriminant = (b * b) - (4 * a * c);
    
   
//     /* Find the nature of discriminant */
//     if(discriminant > 0)
//     {
//         root1 = (-b + sqrt(discriminant)) / (2*a);
//         root2 = (-b - sqrt(discriminant)) / (2*a);

//         printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
//     }
//     else if(discriminant == 0)
//     {
//         root1 = root2 = -b / (2 * a);

//         printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
//     }
//     else if(discriminant < 0)
//     {
//         root1 = root2 = -b / (2 * a);
//         imaginary = sqrt(-discriminant) / (2 * a);

//         printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
//                 root1, imaginary, root2, imaginary);
//     }

//     return 0;
// }

// ////////////////////////////////////////////////////
// C program to check whether triangle is equilateral, scalene or isosceles
// #include <stdio.h>

// int main()
// {
//     int side1, side2, side3;

//     /* Input sides of a triangle */
//     printf("Enter three sides of triangle: ");
//     scanf("%d%d%d", &side1, &side2, &side3);

//     if(side1==side2 && side2==side3) 
//     {
//         /* If all sides are equal */
//         printf("Equilateral triangle.");
//     }
//     else if(side1==side2 || side1==side3 || side2==side3) 
//     {
//         /* If any two sides are equal */
//         printf("Isosceles triangle.");
//     }
//     else 
//     {
//         /* If none sides are equal */
//         printf("Scalene triangle.");
//     }

//     return 0;
// }
// //////////////////////////////////////////////////////

// C program to check whether triangle is valid or not if sides are given
// #include <stdio.h>

// int main()
// {
//     int side1, side2, side3;

//     /* Input three sides of a triangle */
//     printf("Enter three sides of triangle: \n");
//     scanf("%d%d%d", &side1, &side2, &side3);
    
//     if((side1 + side2) > side3)
//     {
//         if((side2 + side3) > side1)
//         {
//             if((side1 + side3) > side2) 
//             {
//                 /*
//                  * If side1 + side2 > side3 and
//                  *    side2 + side3 > side1 and
//                  *    side1 + side3 > side2 then
//                  * the triangle is valid.
//                  */
//                 printf("Triangle is valid.");
//             }
//             else
//             {
//                 printf("Triangle is not valid.");
//             }
//         }
//         else
//         {
//             printf("Triangle is not valid.");
//         }
//     }
//     else
//     {
//         printf("Triangle is not valid.");
//     }

//     return 0;
// }
// ////////////////////////////////////////////////////////////////////
// C program to check whether triangle is valid or not if angles are given
// #include <stdio.h>

// int main()
// {
//     int angle1, angle2, angle3, sum;

//     /* Input all three angles of triangle */
//     printf("Enter three angles of triangle: \n");
//     scanf("%d%d%d", &angle1, &angle2, &angle3);

//     sum = angle1 + angle2 + angle3; 

//     if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) 
//     {
//         printf("Triangle is valid.");
//     }
//     else
//     {
//         printf("Triangle is not valid.");
//     }

//     return 0;
// }

// /////////////////////////////////////////////////////////////////

// C program to enter basic salary and calculate gross salary of an employee
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
// Basic Salary >= 20001 : HRA = 30%, DA = 95%
// #include <stdio.h>
// int main()
// {
//     float basic, gross, da, hra;

//     /* Input basic salary of employee */
//     printf("Enter basic salary of an employee: ");
//     scanf("%f", &basic);
//     if(basic <= 10000)
//     {
//         da  = basic * 0.8;
//         hra = basic * 0.2;
//     }
//     else if(basic <= 20000)
//     {
//         da  = basic * 0.9;
//         hra = basic * 0.25;
//     }
//     else
//     {
//         da  = basic * 0.95;
//         hra = basic * 0.3;
//     }
//     gross = basic + hra + da;
//     printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

//     return 0;
// }
// //////////////////////////////////////////////////

