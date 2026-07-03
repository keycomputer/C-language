#include <stdio.h>
int main()
{
    int a[100], number, i, j, min, pos;
    printf("\n Please Enter the total Number of Elements  :  ");
    scanf("%d", &number);
    printf("\n Please Enter the Array Elements  :  ");
    for(i = 0; i < number; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < number; i++) {
        min = a[0] ;
        pos = i ; 
        for(j = i + 1; j < number; j++) {
            if(min > a[j])
            {
                min = a[j];
                pos = j ;
            }   
        }
        a[pos] = a[i];
        a[i] = min ; 
    }
    printf("\n Selection Sort Result : ");
    for(i = 0; i < number; i++)  {
        printf(" %d \t", a[i]);
    }
    printf("\n");
    return 0;
}