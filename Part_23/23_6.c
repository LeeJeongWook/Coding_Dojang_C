#include <stdio.h>
 
int main()
{
    unsigned char num1 = 1; // 0000 0001
    unsigned char num2 = 5; // 0000 0101
 
    printf("%u\n", num1 | num2); // 5
    printf("%u\n", num1 ^ num2); // 4
    printf("%u\n", num1 & num2); // 1
 
    num1 = ~num2;
    printf("%u\n", num1); // 250
 
    return 0;
}