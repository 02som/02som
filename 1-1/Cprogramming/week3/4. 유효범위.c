#include <stdio.h>

int main(void)
{
    char n = 128;               // n에 유효 범위를 벗어나는 값을 저장한다. 
    unsigned char red = 300;    // 0~255내의 값으로 설정된다.

    printf("n = %d\n", n);
    printf("red = %d\n", red);
}
