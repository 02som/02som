3-2-----------------------------------------------------
#include <stdio.h>

int main(void)
{
    short x = -7;               // 부호 있는 정수
    unsigned short y = 65529;   // 부호 없는 정수

    printf("x = %5d, %08x\n", x, x); // short형 변수는 출력 시 4바이트로 변환된다.
    printf("y = %5d, %08x\n", y, y); // short형 변수는 출력 시 4바이트로 변환된다.
}
