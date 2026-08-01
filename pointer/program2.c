// Dynamic Allocation  

// malloc, calloc and free
// STACK , CODE , DATA , HEAP(DMA)

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     //ptr = (int*) malloc(sizeof(int));
//     ptr = (int*)calloc(1,sizeof(int));
//     *ptr = 100;
//     free(ptr);
//     // ptr = (int*) malloc(sizeof(int));
//     ptr = (int*)calloc(1,sizeof(int));
//     *ptr= 2000;
//     free(ptr);
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = (int*)malloc(sizeof(int)*10);
//     for(int i=0;i<10;i++)
//         *(ptr+i)= i+1;  // assignment 
//     for(int i=0;i<10;i++)
//         printf("%d\t ", *(ptr+i));
// }
#include<stdio.h>
#include<stdlib.h>
void input(int *, int );
void output(int *, int);
int main()
{
    int *ptr, n ;
    printf("Enter no of elements ::  ");
    scanf("%d", &n);
    // assignment of memory
    ptr = (int*)malloc(sizeof(int)*n );
    input(ptr, n);
    output(ptr, n);
}
void input(int *ptr, int n)
{
    int i;
    printf("Enter data ");
    for(i=0;i<n;i++)
        scanf("%d", (ptr+i));
}
void output(int *ptr, int n)
{
    int i;
    printf("\nDATA  :: ");
    for(i=0;i<n;i++)
        printf("%d\t ", *(ptr+i));
}
