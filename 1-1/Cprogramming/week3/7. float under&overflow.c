#include <stdio.h>

int main(void)
{
    float num = 3.40282e38; // float형의 최대값 저장
    printf("num = %.15e\n", num);

    num = 3.40282e40;       // float형의 오버플로우 발생 --> INF로 설정(무한대 표시)
    printf("num = %.15e\n", num);

    num = 1.17549e-38;      // float형의 최소값 저장
    printf("num = %.15e\n", num);

    num = 1.17549e-42;      // 가수부를 줄여서 실수 표현(3번째자리까지 표현)->제대로 표현x
    printf("num = %.15e\n", num); 

    num = 1.17549e-46;      // float형의 언더플로우 발생 --> 0으로 설정
    printf("num = %.15e\n", num);
}
===============================================
<결과>
num = 3.402820018375656e+38
num = inf
num = 1.175490006797048e-38
num = 1.175689411568522e-42
num = 0.000000000000000e+00
