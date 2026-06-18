#include<stdio.h>
int main()
{
    char ch ;
    printf("enter any character ");
    scanf("%c", &ch);

    if (ch == 'a' || ch =='A' ||
        ch == 'e' || ch =='E' ||
        ch == 'i' || ch =='I' ||
        ch == 'o' || ch =='O' ||
        ch == 'U' || ch =='U'  )
        printf("Vowel ");
    else
        printf("consonant");
}