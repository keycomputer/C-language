// Binary from Decimal (Integer) number using C program
// #include <stdio.h>

// void getBinary(int);

// int main() {
//   int num = 0;
  
//   printf("Enter an integer number :");
//   scanf("%d", & num);
  
//   printf("\nBinary value of %d is =", num);
//   getBinary(num);
  
//   return 0;
// }

// /*Function definition : getBinary()*/
// void getBinary(int n) {
//   int loop;
//   /*loop=15 , for 16 bits value, 15th bit to 0th bit*/
//   for (loop = 15; loop >= 0; loop--) {
//     if ((1 << loop) & n)
//       printf("1");
//     else
//       printf("0");
//   }
// }


/////////////////////////////////////////////////
// C program to swap two bits of a byte

#include <stdio.h>
/*Program to swap 1st and 2nd bit of hexadecimal value stored in data variable*/

// int main()
// {
//     unsigned char data = 0xA; // Assiging hexadecimal value

//     // Get 1st bit from data
//     unsigned char bit_1 = (data >> 1) & 1;

//     // Get 2nd bit from data
//     unsigned char bit_2 = (data >> 2) & 1;

//     // Get XOR of bit_1 and bit_2
//     unsigned char xor_of_bit = bit_1 ^ bit_2;

//     printf("After swapping the bits, data value is: %2X", data ^ (xor_of_bit << 1 | xor_of_bit << 2));

//     return 0;
// }
/////////////////////////////////////////////////////

// Reversing bits of a number using C program
/*C program to reverse bits of a number */

// #include <stdio.h>

// unsigned int revBits(unsigned int data)
// {
//     unsigned char totalBits = sizeof(data) * 8;
//     unsigned int revNum = 0, i, temp;

//     for (i = 0; i < totalBits; i++) {
//         temp = (data & (1 << i));
//         if (temp)
//             revNum |= (1 << ((totalBits - 1) - i));
//     }

//     return revNum;
// }

// int main()
// {
//     unsigned int num = 0x4;
//     printf("\n%u", revBits(num));
//     return 0;
// }

// C program to count number of 1's in an integer number.
/*C program to count number of 1's in a number */
 
#include <stdio.h>
 
int count1s(unsigned int num)
{
    unsigned char i;
    int count=0;
    unsigned char totalBits=sizeof(num)*8; 
    for(i=0;i< totalBits;i++)
    {
        if( num & (1<< i) )
            count++;
    }
    return count;
}

int main()
{
    unsigned int data=0x58;
    printf("\nTotal number of 1's are : %d\n",count1s(data));
 
    return 0;
}
////////////////////////////////////////////////////

