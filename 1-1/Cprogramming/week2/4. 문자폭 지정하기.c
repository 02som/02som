#include <stdio.h>

int main()
{
    int x = 987;
    float y = 342362.52632623632362;

    printf("%d\n", x);
    printf("%6d\n", x);     // 6문자 폭에 맞춰 오른쪽으로 정렬해서 출력
    printf("%-6d\n", x);    // 6문자 폭에 맞춰 왼쪽으로 정렬해서 출력

    printf("%f\n", y);
    printf("%.2f\n", y);    // 소수점 이하 2자리로 실수를 출력한다.(정밀도 지정)
    printf("%6.8f\n", y);   // 폭과 정밀도 지정
}
