//복합대입연산자
#include <stdio.h>

int main(void)
{
    int w = 10, x = 20, y = 10, z = 7;
    int result = 0;    // result의 초기값은 0

    result += w;        // result = result + w; ==> 0 + 10를 result에 대입한다.
    printf("result = %d\n", result);

    result *= x;        // result = result * x; ==> 10 * 20를 result에 대입한다.
    printf("result = %d\n", result);

    result /= y;        // result = result / y; ==> 200 / 10을 result에 대입한다.
    printf("result = %d\n", result);

    result %= z;        // result = result % z; ==> 20 % 7을 result에 대입한다.
    printf("result = %d\n", result);

    result *= 2 + 1;    // result = result * (2 + 1); ==> 6 * 3을 result에 대입한다.
    printf("result = %d\n", result);
}
