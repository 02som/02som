#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float  rate1; //값 초기화x 쓰레기값o 0으로 초기화 후 사용하는 것이 좋음
    double rate2 = 9.876543210987654;

    printf("값 입력>>");
    scanf("%f", &rate1);

    printf("float  rate1 = %.15f\n", rate1);    // 소수점 이하 15자리 출력
    printf("double rate2 = %.15f\n", rate2);    // 소수점 이하 15자리 출력
    return 0;
}
