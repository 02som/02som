#include <stdio.h>

int main(void)
{
    float  rate1 = 9.876543210987654;
    double rate2 = 9.876543210987654;

    printf("float  rate1 = %.15f\n", rate1);    // 소수점 이하 15자리 출력
    printf("double rate2 = %.15f\n", rate2);    // 소수점 이하 15자리 출력
}
===============================
<결과>
float  rate1 = 9.876543045043945 #아무숫자나들어감
double rate2 = 9.876543210987654 #정밀도 측면에서 double이 더 정확함
