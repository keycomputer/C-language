// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char *cptr = "abcd"; 
//     printf("%s", cptr);
//     cptr = "xyz";
//     printf("%s", cptr);

//     char name[]="John";
//     cptr = name; // &name[0]
//     printf("%s", cptr);

//     cptr = (char*)malloc(sizeof(char)*100);
//     cptr = "abcdefgh";
//     printf("%s", cptr);
//     free(cptr);
// }
///////////////////////////////////

// #include<stdio.h>

// int main()
// {
//     char name [100], *cptr;
//     printf("Enter any name ");
//     scanf("%s", name);
//     cptr = name ;//&name[0]; // init 
//     while (*cptr != '\0')
//     {
//         printf("%c", *cptr);
//         cptr++;
//     }
//     for(cptr = name ; *cptr != '\0'; cptr++)
//         printf("%c", *cptr);    
// }
////////////////////////////////////////////
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     // char names[2][10] = { "John", "Mary"}; //2 rows and column

//     // char *names[] = {"John", "Mary"};
//     // printf("%s\n", names[0]);
//     // printf("%s", names[1]);

//     int n; 
//     char arr1[100];
//     char *names[100] ;
//     printf("Enter no of students ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter student %d name : ", i+1);
//         scanf("%s", arr1);
//         names[i] = (char*)malloc(sizeof(char)*strlen(arr1));
//         strcpy(names[i], arr1);
//     }
//     for(int i=0;i<n;i++)
//         printf("%s", names[i]);

// }


