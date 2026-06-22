#include <stdio.h>

int main()
{
    int a, b, c ;
    printf("enter three numbers ");
    scanf("%d%d%d", &a, &b,&c);

    switch(a + b - c)
    {
        case 1 :
        printf("case 1" );
        break;
        case 2 :
        printf("case 2" );
        break;
        case 3 :
        printf("case 3" );
        break;
        case 4 :
        printf("case 4" );
        break;
        
    }
}
