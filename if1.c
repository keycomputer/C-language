#include<stdio.h>
int main()
{
    int number ;
    printf("enter any number ");
    scanf("%d", &number);

    if(number >100)
        printf("number is greater than 100 ");
    else
        printf("number is equal or greater than 100 ");
}