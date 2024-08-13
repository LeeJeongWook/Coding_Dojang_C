#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i = 1;

    for (;;)
    {
        if(i > 103)
            break;
        if(i % 10 != 3){
            i++;
            continue;
        }
        
        printf("%d ", i);
        i++;
    }

    return 0;
}