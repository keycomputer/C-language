#include<stdio.h>
// userdefine datatype -> template 
struct Student{
    char name[100];
    float marks[3]; 
    float per; 
    char grade ;
}; 
int main()
{
    float sum=0;
    struct Student s1 ; // s1 object of Student data type 
    printf("Enter name :: ");
    scanf("%s", s1.name);
    printf("Enter 2 sub marks ");
    for(int i=0;i<3;i++)
        scanf("%f", &s1.marks[i]);
    for(int i=0;i<3;i++)
        sum += s1.marks[i];
    s1.per = sum / 210 * 100 ;
    if(s1.per > 80 )
        s1.grade = 'A';
    else if (s1.per > 60)
        s1.grade = 'B';
    else if (s1.per > 40 )
        s1.grade = 'C';
    else
        s1.grade = 'D';
    printf("%s\t%f\t%c", s1.name, s1.per, s1.grade);
}