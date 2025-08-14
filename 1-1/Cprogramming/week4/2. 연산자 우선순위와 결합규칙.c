//연산자 우선순위와 결합규칙
#include <stdio.h>

int main(void)
{
    int x = 5, y = 1, z = 15;
    int result;

    result = ++x * 2;       // (++x) * 2로 계산된다. x는 증가되어 6이 된다.
    printf("result = %d\n", result);

    result = x + 1 > 0;     // (x + 1) > 0으로 계산된다.
    printf("result = %d\n", result);

    result = x << y;        // x << y를 먼저 계산한 다음 = 연산을 수행한다.
    printf("result = %d\n", result);

    result = (x + y) / 2;   // 우선순위가 혼동되면 ( )로 묶어준다.
    printf("result = %d\n", result);

    result = x = y;     // 대입 연산자는 좌 <-- 우로 결합되므로 result = (x = y)로 계산된다.
    printf("result = %x\n", result);
}
