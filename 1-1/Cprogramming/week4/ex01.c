#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.
//교재: 5번 문제

int main(void) {
    double usd, rate, krw;

    printf("USD? ");
    scanf_s("%lf", &usd);
    printf("\n원/달러 환율? ");
    scanf_s("%lf", &rate);
    krw = usd * rate;
    printf("\nUSD %.0lf = KRW %.2lf\n", usd, krw);
    return 0;
}