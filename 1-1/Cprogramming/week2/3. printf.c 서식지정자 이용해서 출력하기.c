#include <stdio.h>

int main()
{
    int a;      // 정수형 변수 선언
    float b;    // 실수형 변수 선언
    char c;     // 문자형 변수 선언

    a = 10;     // 정수형 변수에 값 대입
    b = 1.23;   // 실수형 변수에 값 대입
    c = 'A';    // 문자형 변수에 값 대입

    printf("%d %x\n", a, a);    // 10진수, 16진수로 정수 출력
    printf("%f %e\n", b, b);    // 부동소수점, 지수 표기로 실수 출력
    printf("%c\n", c);          // 문자 출력
}
