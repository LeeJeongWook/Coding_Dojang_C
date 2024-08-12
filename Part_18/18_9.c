#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char word;
    scanf("%c", &word);

    if(word == 'a'){
        printf("a입니다.");
    }
    else{
        printf("a가 아닙니다.");
    }
}