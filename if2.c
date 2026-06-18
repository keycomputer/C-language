#include<stdio.h>
int main()
{
    char ch ;
    printf("enter any character ");
    scanf("%c", &ch);
    printf("Character - %c\n", ch );
    printf("ASCII - %d\n", ch );
    // if (ch >= 65 && ch<=90 )
    if(ch >='A' && ch<='Z'){
        ch = ch + 32 ; 
        printf("Lower case = %c", ch);
    }
    else if (ch >='a' && ch<='z'){
        ch = ch-32;
        printf("Upper case = %c", ch);
    }
    else
        printf("invalid alphabet ");

}