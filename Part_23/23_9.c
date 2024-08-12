#include <stdio.h>

int main(){
    unsigned long long num;
    
    scanf("%lld", &num);
    num = num << 20 >> 4;
    
    printf("%lld", num);
}