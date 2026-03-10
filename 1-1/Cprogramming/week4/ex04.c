#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//아파트 면적을 제곱미터로 입력받아서 몇 평인지 출력하는 프로그램 작성
//1제곱미터 = 0.3025평(const변수 이용)
//교재: 9번 문제


int main(void) {
    const double apartPyung = 0.3025;
    double sq_m, pyung;

    printf("아파트 면적(제곱미터) 입력: ");
    scanf_s("%lf", &sq_m);
    pyung = sq_m * apartPyung;
    printf("%.2lf 제곱미터 = %.2lf 평\n", sq_m, pyung);
    return 0;
}