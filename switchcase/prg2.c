#include<stdio.h>
int main()
{
    int a ;
    printf("enter any number ");
    scanf("%d", &a);
    // fall thru 
    switch(a)
    {
        case 1 :
        printf("NUmber entered = 1 ");
        case 2:
        printf("NUmber entered = 2 ");
        case 3 :
        printf("NUmber entered = 3 ");
        case 4:
        printf("NUmber entered = 4 ");
        break;
        default:
        printf("entered = %d", a);
           
    }
}