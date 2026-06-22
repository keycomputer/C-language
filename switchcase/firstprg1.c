#include<stdio.h>
// int , char 
int main()
{
    int a ;
    printf("enter any number ");
    scanf("%d", &a);
    switch(a)
    {
        case 1 :
        printf("NUmber entered = 1 ");
        break ; 
        case 2:
        printf("NUmber entered = 2 ");
        break ; 
        case 3 :
        printf("NUmber entered = 3 ");
        break ; 
        case 4:
        printf("NUmber entered = 4 ");
        break ; 
        default:
        printf("entered = %d", a);
        break;        
    }
}