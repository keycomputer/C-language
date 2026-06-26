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

////////////////////////////////////////////////////

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

/////////////////////////////////////////
//// odd or even 
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

//////////////////////////////////////
/// divisible 
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
///////////////////////////////////////////////
// ###  grade ###
// #include<stdio.h>

// int main()
// {
//     double sub1, sub2, sub3;
//     double sum , per ;
//     char grade;
//     printf("Enter three subject marks ");
//     scanf("%lf%lf%lf", &sub1, &sub2, &sub3);
//     sum = sub1 + sub2 + sub3;
//     per = sum/210 *100 ; // percentage 70MAX Marks 

//     // if (per >=80)
//     //     grade = 'A';
//     // else if (per >=60)
//     //     grade = 'B';
//     // else if (per >=40)
//     //     grade = 'C';
//     // else
//     //     grade = 'D';
// /////////////////////////////////////
//     if (per <40)
//         grade ='D';
//     else if(per < 60)
//         grade = 'C';
//     else if (per < 80)
//         grade = 'B';
//     else
//         grade ='A';

//     printf("Total Marks = %0.2lf \n",sum);
//     printf("Percentage  = %0.2lf \n", per);
//     printf("Grade  = %c", grade);
    
// }
////////////////////////////////////////////

// #include<stdio.h>

// int main()
// {
//     double sub1, sub2, sub3;
//     double sum , per ;
//     char grade;
//     printf("Enter three subject marks ");
//     scanf("%lf%lf%lf", &sub1, &sub2, &sub3);

//     // if (sub1 <0 || sub2 <0 || sub3<0)
//     // {
//     //     printf("Invalid marks entered ");
//     //     return 0;
//     // }

//     sum = sub1 + sub2 + sub3;
//     per = sum/210 *100 ; // percentage 70MAX Marks 

//     if (per <=100 && per >=80)
//         grade = 'A';
//     else if (per >=60 && per <80 )
//         grade = 'B';
//     else if (per >=40 && per <60)
//         grade = 'C';
//     else if (per>=0 && per <40)
//         grade = 'D';
//     else
//         grade = 'I';
   
//     if (grade != 'I'){
//     printf("Total Marks = %0.2lf \n",sum);
//     printf("Percentage  = %0.2lf \n", per);
//     printf("Grade  = %c", grade);
//     }
//     else
//         printf("Inavlid data entered ");
// }
/////////////////////////////////////////////

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
//////////////////////////////////////////////

// #include<stdio.h>
// int main()
// {
//  int num1;
//  printf ( "enter a number");
//  scanf("%d",&num1);
//  if (num1 % 3==0)
//  {
//     printf("fizz");

//  }
// else 
// {
// printf("not divisible");
// }
// if (num1%5==0)
// {
//     printf("buzz");
// }
// else
// {  
// printf("not divisible");
// }
// if(num1 % 15==0)
// {
// printf ("fizz buzz");
// }
// else
// {
//     printf("not divisible");

// }

// }