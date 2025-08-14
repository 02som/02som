#define _CRT_SECURE_NO_WARNINGS     // scanf 사용을 위해서 필요
#include <stdio.h>

int main(void)
{
    int amount;             // 수량 --> 초기화되지 않았으므로 쓰레기 값
    int price = 1000;       // 단가 --> 1000으로 초기화
    int total_price = 0;    // 합계 금액 --> 정수형 변수는 0으로 초기화

    //printf("amount = %d, price = %d\n", amount, price);

    printf("수량? ");         // amount 입력
    scanf("%d", &amount);

    printf("단가? ");         // price 입력
    scanf("%d", &price);    

    total_price = amount * price;   // 계산 결과를 total_price에 대입
    printf("합계 금액 = %d\n", total_price);
}
