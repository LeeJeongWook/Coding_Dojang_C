#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char word;
    scanf("%c", &word);

    printf("%s\n", word != 'k' ? "Âü" : "°ÅÁþ");
    printf("%s\n", word > 'h' ? "Âü" : "°ÅÁþ");
    printf("%s\n", word <= 'o' ? "Âü" : "°ÅÁþ");
}