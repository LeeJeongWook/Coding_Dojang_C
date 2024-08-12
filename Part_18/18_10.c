#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main(){
    int kor, eng, mth, sci, avg;

    scanf("%d %d %d %d", &kor, &eng, &mth, &sci);

    avg = (kor + eng + mth + sci) / 4;
    if(0 <= kor && kor <= 100 &&
    0 <= eng && eng <= 100 &&
    0 <= mth && mth <= 100 &&
    0 <= sci && sci <= 100){
        if(avg >= 85){
            printf("합격");
        }
        else{
            printf("불합격");
        }
    }
    else{
        printf("잘못된 점수");
    }
}