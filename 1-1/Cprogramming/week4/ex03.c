#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define CM_PER_INCH 2.54 //1inch = 2.54  (매크로 상수 이용)
//길이를 인치로 입력받아 센티미터로 변환하는 프로그램을 작성
//교재: 8번 문제

int main(void) {
    double inch, cm;

    printf("인치 입력: ");
    scanf_s("%lf", &inch);
    cm = inch * CM_PER_INCH;
    printf("%.2lf inch = %.2lf cm\n", inch, cm);
    return 0;
}