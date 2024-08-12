#include <stdio.h>
 
int main()
{
    unsigned char num1 = 32;
 
    num1 = num1 >> 4 << 4;
 
    printf("%u\n", num1);   // 1
 
    return 0;
}