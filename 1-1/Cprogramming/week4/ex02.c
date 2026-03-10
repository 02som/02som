#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//변수3개를 선언하고, 초기화(0)한 후, 값을 입력받아
//합과 평균을 구하는 프로그램 작성
//합(sum)과 평균(double avg)도 변수를 선언해서 사용!!

int main(void) {
    int num1 = 0, num2 = 0, num3 = 0, sum = 0;
    double average = 0.0;

    printf("세 수 입력: ");
    scanf_s("%d %d %d", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    average = sum / 3.0;
    printf("합: %d\n평균: %.2lf\n", sum, average);
    return 0;
}