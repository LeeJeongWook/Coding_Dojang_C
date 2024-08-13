#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char word;
    scanf("%c", &word);
    for(int i = word; i <= 'z'; i++){
        printf("%c", i);
    }
}