#include <stdio.h>
 
int main()
{
    /*===== solution =====*/
    unsigned char num1;
    unsigned short num2;
    /*====================*/

    printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(long long)); // 1 + 2 + 8 = 11
 
    return 0;
}