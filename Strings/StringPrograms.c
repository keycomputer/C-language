// Write a C program to find length of a string.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char arr[100];
//     printf("Enter any word");
//     scanf("%s", arr);
//     // printf("length - %d ", strlen(arr));
//     int length= 0;
//     for(length=0;arr[length]!='\0'; length++)   ;  // empty loops  
//     printf("Length = %d ", length);
// }
/////////////////////////////////////////
// Write a C program to copy one string to another string.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char arr1[100], arr2[100];
//     printf("Enter any word ");
//     scanf("%s", arr1);
//     strcpy(arr2, arr1); 
//     printf("Arr2 =  %s",arr2);
//     // int i;
//     // for(i=0; arr1[i]!='\0';i++)
//     //     arr2[i] = arr1[i];
//     // arr2[i] ='\0';
//     // printf("Arr2 = %s", arr2);
// }
// Write a C program to concatenate two strings.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char arr1[100], arr2[100];
//     printf("Enter any two words ");
//     scanf("%s", arr1);
//     scanf("%s", arr2);
//     strcat(arr1, arr2); 
//     printf("Joined words  =  %s",arr1);
// }
///////////////////////////////////////////////////////////////


// Write a C program to compare two strings.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char arr1[100], arr2[100];
//     printf("Enter any two words ");
//     scanf("%s", arr1);
//     scanf("%s", arr2);
//     // 0 -> Equal  , 1  , -1  
//     if (stricmp(arr1, arr2) ==0) //if (strcmp(arr1, arr2) ==0) // A , a 65 , 97 , a , a 97, 97
//         printf("Equal");
//     else    
//         printf("Not Equal "); 
// }

// Write a C program to convert lowercase string to uppercase.
// #include<string.h>
// #include<stdio.h>
// #include<ctype.h>
// int main()
// {
//     char name[100];
//     scanf("%s", name);
//     // strupr(name);
//     // printf("%s", name);
// ///////////////////
//     // for(int i=0; name[i]!='\0';i++)
//     //     name[i] = toupper(name[i]);
// ///////////////////
//     for(int i=0; name[i]!='\0';i++)
//     {
//         if(islower(name[i]))
//             name[i] = toupper(name[i]);
//     }
//     printf("%s", name);
// }
// Write a C program to convert uppercase string to lowercase.
// #include<string.h>
// #include<stdio.h>
// int main()
// {
//     char name[100];
//     scanf("%s", name);
//     strlwr(name);
//     printf("%s", name);
// }
// Write a C program to toggle case of each character of a string.

// #include<stdio.h>
// #include<ctype.h>
// int main()
// {
//     char name[100];
//     printf("Enter ");
//     scanf("%s", name);
//     for(int i=0; name[i]!='\0';i++)
//     {
//         if(isupper(name[i]))
//             name[i] = tolower(name[i]);
//         else if (islower(name[i]))
//             name[i] = toupper(name[i]);
//     }
//     printf("%s", name);
// }
// Write a C program to find total number of alphabets, digits or special character in a string.
// #include<stdio.h>
// int main()
// {
//     char name[100];
//     int ca = 0, cd =0, cs=0, csp=0;
//     printf("Enter ");
//     // scanf("%s", name);
//     gets(name);
//     for(int i=0; name[i]!='\0';i++)
//     {
//         if((name[i]>='a'&&name[i]<='z') || (name[i]>='A' && name[i]<='Z'))
//             ca++;
//         else if (name[i]>='0' && name[i]<='9')
//             cd++;
//         else if (name[i] ==' ' )
//             cs++;
//         else    
//             csp++;
//     }
//     printf("%d %d %d %d", ca, cd, cs, csp);
// }

// Write a C program to count total number of vowels and consonants in a string.
// #include<stdio.h>
// #include<ctype.h>
// int main()
// {
//     char name[100];
//     int cv=0,cc=0;
//     printf("Enter ");
//     scanf("%s", name);
//     for(int i=0;name[i]!='\0';i++)
//     {
//         if(toupper(name[i]) == 'A' || toupper(name[i]) == 'E' ||
//         toupper(name[i]) == 'I' || toupper(name[i]) == 'O' ||
//         toupper(name[i]) == 'U')
//             cv++;
//         else    
//             cc++; 
//      }
//      printf("%d %d", cv, cc);
// }
// Write a C program to count total number of words in a string.
// Write a C program to find reverse of a string.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char arr1[100];
//     printf("Enter  ");
//     scanf("%s", arr1);
//     strrev(arr1);
//     printf("%s", arr1);
// }
    // ABCBA 
    // i   j 
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char arr1[100], ch;
//     printf("Enter  ");
//     scanf("%s", arr1);
//     int i , j;
//     i = 0 ;
//     j = strlen(arr1)-1; // last index 
//     while(i < j)
//     {
//         ch = arr1[i];
//         arr1[i] = arr1[j];
//         arr1[j] = ch;
//         i++;
//         j--;
//     }
//     printf("%s", arr1);
// }
// #include<stdio.h>
// int main()
// {
//     char arr1[100];
//     printf("Enter  ");
//     scanf("%s", arr1);
//     int i , j;
//     i = 0 ;
//     j = strlen(arr1)-1; // last index 
//     while(i < j)
//     {
//         if(arr1[i] != arr1[j])
//             break;
//         i++;
//         j--;
//     }
//     if(i >=j)
//         printf("Palindrome");
//     else    
//         printf("not a palindrome");
// }

// Write a C program to check whether a string is palindrome or not.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char arr1[100], arr2[100];
//     printf("Enter ");
//     scanf("%s", arr1); // aba   , abc
//     strcpy(arr2, arr1);  // aba  , abc
//     strrev(arr2);           // aba  , cba 
//     if(strcmp(arr1, arr2) == 0) 
//         printf("Palindrome");
//     else    
//         printf("Not a palindrome");
// }

// Write a C program to reverse order of words in a given string.
// Write a C program to find first occurrence of a character in a given string.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char arr[100], ch ;
//     printf("Enter ");
//     scanf("%s", arr);
//     printf("enter character - to search ");
//     scanf(" %c", &ch);
//     int index =-1 ; // -1 no found
//     for(int i=0;arr[i]!='\0';i++)
//     {
//         if (arr[i] == ch)
//         {
//             index = i;
//             break;
//         }
//     }
//     if (index == -1)
//         printf("Not found ");
//     else
//         printf("first occu - %d", index);
// }

// Write a C program to find last occurrence of a character in a given string.
// Write a C program to search all occurrences of a character in given string.
// Write a C program to count occurrences of a character in given string.
// Write a C program to find highest frequency character in a string.
// Write a C program to find lowest frequency character in a string.