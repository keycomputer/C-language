#include<stdio.h>
#include<ctype.h>

int main()
{
    //char ch ;
    printf("is alpha - %d\n", isalpha('a'));
    printf("is alpha - %d\n", isalpha('1'));
    printf("is alpha - %d\n", isalpha('^'));

    printf("is digit - %d\n", isdigit('a'));
    printf("is digit - %d\n", isdigit('1'));
    printf("is digit - %d\n", isdigit('^'));

    printf("is alpha numeric - %d\n", isalnum('a'));
    printf("is alpha numeric- %d\n", isalnum('1'));
    printf("is alpha numeric - %d\n", isalnum('^'));
    
    printf("is lower case %d\n", islower('a'));
    printf("is lower case %d\n", islower('A'));
    printf("is upper case %d\n", isupper('a'));
    printf("is upper case %d\n", isupper('A'));

    printf("is space %d\n", isspace(' '));
    printf("is space %d\n", isspace(' '));
    printf("is punctuators  %d\n", ispunct('('));

    printf("Upper case - %c\n", toupper('a'));
    printf("Lower case - %c\n", tolower('A'));
// isprint()  // iscntrl() // 
// isblank() -> space \t  
}