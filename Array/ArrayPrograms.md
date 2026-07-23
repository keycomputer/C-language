
## ➽ Write a C program to read and print elements of array.
```
#include <stdio.h>
int main()
{
    int arr[100];
    int i, n;
printf("Enter size of array:: ");
    scanf("%d",&n);
printf("Enter %d elements in the array :: ",n);
    for(i=0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
printf("\nElements in array are: ");
    for(i=0; i<n ; i++)
    {
        printf("%d\t ",arr[i]);
    }
return 0;
}
```
## ➽ Write a C program to find sum of all array elements.
```
#include <stdio.h>
int main()
{
    int arr[100], sum = 0;
    int i, n;
printf("Enter size of array:: ");
    scanf("%d",&n);
printf("Enter %d elements in the array :: ",n);
    for(i=0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
        sum +=arr[i]; // sum = sum + arr[i];
    }
printf("\nElements in array are: ");
    for(i=0; i<n ; i++)
    {
        printf("%d\t ",arr[i]);
    }
    printf("\nSum of all Elements are :: %d",sum);
return 0;
}
```
## ➽Write a C program to find maximum and minimum element in an array.
```
#include <stdio.h>
int main()
{
    int arr[100], max, min;
    int i, n;
printf("Enter size of array:: ");
    scanf("%d",&n);
printf("Enter %d elements in the array :: ",n);
    for(i=0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    printf("\nElements in array are: ");
    for(i=0; i<n ; i++)
    {
        printf("%d\t",arr[i]);
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nMAX Elements is :: %d\nMIN Elements is :: %d",max,min);
return 0;
}
```
## ➽Write a C program to print all negative elements in an array.
```
#include <stdio.h>
int main()
{
    int arr[50];
    int i, n;
printf("Enter size of the array : ");
    scanf("%d", &n);
printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
printf("\nAll negative elements in array are : ");
    for(i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
return 0;
}
```

## ➽Write a C program to count total number of even and odd elements in an array.
```
#include <stdio.h>
int main()
{
    int arr[50];
    int i, size, even, odd;
    
    even = 0;
    odd  = 0;
printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements in array: ", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
for(i=0; i<size; i++)
    {
        
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);
return 0;
}
```

## ➽Write a C program to count total number of negative elements in an array.
```
#include <stdio.h>
int main()
{
    int arr[50];
    int i, size, count = 0;
    printf("Enter size of the array :: ");
    scanf("%d", &size);
 
    printf("Enter elements in array :: ");
    for(i=0; i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++)
    {
        if(arr[i] < 0)
        {
            count++;
        }
    }
    printf("\nTotal negative elements in array = %d", count);
 
    return 0;
}
```
## ➽Write a C program to copy all elements from an array to another array
```
#include <stdio.h>
#define MAX 100
 
int main()
{
    int arr1[MAX], arr2[MAX];
    int i, size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
 
    printf("Enter elements of Array1 : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(i=0; i<size; i++)
    {
        arr2[i] = arr1[i];
    }
 
    printf("\nElements of Array 2 are :: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr2[i]);
    }
 
    return 0;
}
```

## ➽Write a C program to insert an element in an array.
```
At Begin:
#include<stdio.h>
 
int main()
{
    int i,arr[100], n, elem;
    printf("Enter no of elements you want to enter");
    scanf("%d",&n);
 
    for(i = 0 ; i<n ; i++)
    {
        printf("Enter element in %d = ",i+1);
        scanf("%d",&arr[i]);
    }
 
    printf("enter element you want enter at the beginning ");
    scanf("%d",&elem);
 
    for(i= n-1;i>=0;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = elem;
    n = n+1;
    for(i = 0 ; i<n ; i++)
    {
        printf("Element in %d = %d\n",i+1,arr[i]);
    }
}
 
At End:
#include<stdio.h>
int main()
{
int i,arr[100], n, elem,pos;
    printf("Enter no of elements you want to enter");
    scanf("%d",&n);
for(i = 0 ; i<n ; i++)
    {
        printf("Enter element in %d = ",i+1);
        scanf("%d",&arr[i]);
    }
printf("Enter Element you want enter at the END ");
    scanf("%d",&elem);
arr[n] = elem;
    n = n+1;
for(i = 0 ; i<n ; i++)
    {
        printf("Element in %d = %d\n",i+1,arr[i]);
    }
}
At Pos:
#include<stdio.h>
int main()
{
int i,arr[100], n, elem,pos;
    printf("Enter no of elements you want to enter");
    scanf("%d",&n);
for(i = 0 ; i<n ; i++)
    {
        printf("Enter element in %d = ",i+1);
        scanf("%d",&arr[i]);
    }
printf("enter Element you want enter at the Pos ");
    scanf("%d",&elem);
printf("Enter Position ");
    scanf("%d",&pos);
if(pos<=n)
    {
    for(i=n;i>=pos;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = elem;
    n = n+1;
for(i = 0 ; i<n ; i++)
    {
        printf("Element in %d = %d\n",i+1,arr[i]);
    }
    }
    else{
        printf("Position doesn't exist ");
}
}
```

## ➽Write a C program to delete an element from an array
```
At End:
#include<stdio.h>
int main()
{
int i,arr[100], n, elem,pos;
    printf("Enter no of elements you want to enter");
    scanf("%d",&n);
for(i = 0 ; i<n ; i++)
    {
        printf("Enter element in %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    if(n>=0){
    printf("Deleting Last Element : %d\n\n", arr[n-1]);
    n = n-1;
for(i = 0 ; i<n ; i++)
    {
        printf("Element in %d = %d\n",i+1,arr[i]);
    }
    }
    else{
        printf("Array is Empty");
}
}
```
### At Beg:
```
#include<stdio.h>
int main()
{
int i,arr[100], n, elem,pos;
    printf("Enter no of elements you want to enter");
    scanf("%d",&n);
for(i = 0 ; i<n ; i++)
    {
        printf("Enter element in %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    if(n>=0){
    printf("Deleting First Element : %d\n\n", arr[0]);
    for(i = 0;i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    n = n-1;
for(i = 0 ; i<n ; i++)
    {
        printf("Element in %d = %d\n",i+1,arr[i]);
    }
    }
    else{
        printf("Array is Empty");

}
}
```
### At Pos:
```
#include<stdio.h>
int main()
{
int i,arr[100], n, elem,pos;
    printf("Enter no of elements you want to enter");
    scanf("%d",&n);
for(i = 0 ; i<n ; i++)
    {
        printf("Enter element in %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter Pos of an element you want to delete :: " );
    scanf("%d",&pos);
    if(n>=0){
    if(pos<=n){
    printf("Deleting First Element : %d\n\n", arr[pos-1]);
    for(i = pos-1;i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    n = n-1;
for(i = 0 ; i<n ; i++)
    {
        printf("Element in %d = %d\n",i+1,arr[i]);
    }
    }
else{
        printf("Position does not exist");
}
    }
    else{
        printf("Array is Empty");
}
}
```

## ➽Write a C program to count frequency of each element in an array.
```
#include<stdio.h>
int main()
{
    int arr[100], freq[100];
    int size, i, j, count;
printf("Enter size of array: ");
    scanf("%d", &size);
printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
/* If frequency of current element is not counted */
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
 
    return 0;
}
```

## ➽Write a C program to print all unique elements in the array.
```
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE], freq[MAX_SIZE];
    int size, i, j, count;
 
    /* Input size of array and elements in array */
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
 
    /* Find frequency of each element */
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
 
    /* Print all unique elements of array */
    printf("\nUnique elements in the array are: ");
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }
return 0;
}
```
## ➽Write a C program to count total number of duplicate elements in an array.
```
#include <stdio.h>
#define MAX_SIZE 100  // Maximum array size
int main()
{
    int arr[MAX_SIZE];
    int i, j, size, count = 0;
/* Input size of array */
    printf("Enter size of the array : ");
    scanf("%d", &size);
/* Input elements in array */
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
/*
     * Find all duplicate elements in array
     */
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            /* If duplicate found then increment count by 1 */
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
printf("\nTotal number of duplicate elements found in array = %d", count);
return 0;
}
```
## ➽Write a C program to delete all duplicate elements from an array.
```
#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the array
int main()
{
    int arr[MAX_SIZE]; // Declares an array of size 100
    int size;          // Total number of elements in array
    int i, j, k;       // Loop control variables
/* Input size of the array */
    printf("Enter size of the array : ");
    scanf("%d", &size);
/* Input elements in the array */
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
/*
     * Find duplicate elements in array
     */
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            /* If any duplicate found */
            if(arr[i] == arr[j])
            {
                /* Delete the current duplicate element */
                for(k=j; k<size; k++)
                {
                    arr[k] = arr[k + 1];
                }
/* Decrement size after removing duplicate element */
                size--;
/* If shifting of elements occur then don't increment j */
                j--;
            }
        }
    }
/*
     * Print array after deleting duplicate elements
     */
    printf("\nArray elements after deleting duplicates : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
return 0;
}
```
## ➽Write a C program to merge two array to third array.
```
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr1[50], arr2[50], size1, size2, i, k, merge[100];
    printf("Enter Array 1 Size: ");
    scanf("%d", &size1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &size2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++)
        printf("%d ", merge[i]);
    getch();
    return 0;
}
```

### ➽Write a C program to find reverse of an array.
```
#include <stdio.h>
#define MAX_SIZE 100      // Defines maximum size of array
int main()
{
    int arr[MAX_SIZE];
    int size, i;
/* Input size of array */
    printf("Enter size of the array: ");
    scanf("%d", &size);
/* Input array elements */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
/*
     * Print array in reversed order
     */
    printf("\nArray in reverse order: ");
    for(i = size-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }
return 0;
}
```
### Into — Another Array
```
#include <stdio.h>
#define MAX_SIZE 100       // Maximum array size
int main()
{
    int arr[MAX_SIZE], reverse[MAX_SIZE];
    int size, i, arrIndex, revIndex;
/* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &size);
/* Input array elements */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
revIndex = 0;
    arrIndex = size - 1;
    while(arrIndex >= 0)
    {
        /* Copy value from original array to reverse array */
        reverse[revIndex] = arr[arrIndex];
        
        revIndex++;
        arrIndex--;
    }
/*
     * Print the reversed array
     */
    printf("\nReversed array : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", reverse[i]);
    }
return 0;
}
```
### Same Array :
```
#include <stdio.h>
#define MAX_SIZE 100      // Maximum array size
int main()
{
    int arr[MAX_SIZE];
    int size, i, arrIndex, revIndex;
    int temp; // Used for swapping
/* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &size);
/* Input array elements */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
revIndex = 0;
    arrIndex = size - 1;
    while(revIndex < arrIndex)
    {
        /* Copy value from original array to reverse array */
        temp = arr[revIndex];
        arr[revIndex] = arr[arrIndex];
        arr[arrIndex] = temp;
        
        revIndex++;
        arrIndex--;
    }
/*
     * Print reversed array
     */
    printf("\nReversed array : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
return 0;
}
```
## ➽Write a C program to put even and odd elements of array in two separate array.
```
#include <stdio.h>
 
#define MAX 100
void printArray(int arr[], int len);
 
int main()
{
    int arr[MAX];
    int even[MAX], odd[MAX];
    int evenCount, oddCount;
    int i, size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    evenCount = 0;
    oddCount = 0;
 
    for(i=0; i<size; i++)
    {
        if(arr[i] & 1)
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
        else
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }
 
    printf("\nElements of even array: \n");
    printArray(even, evenCount);
 
    printf("\nElements of odd array: \n");
    printArray(odd, oddCount);
 
    return 0;
}
 
void printArray(int arr[], int len)
{
    int i;
    printf("Elements in the array: ");
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
```
