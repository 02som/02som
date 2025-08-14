#define _CRT_SECURE_NO_WARNINGS     // scanf 사용을 위해서 필요
#include <stdio.h>
#define HOURLY_WAGE 8350            // 시간당 급여

int main(void)
{
    int working_hours = 0;
    int wage = 0;

    printf("working hours? ");
    scanf("%d", &working_hours);            // 근무 시간 입력
    wage = HOURLY_WAGE * working_hours;     // 임금 계산

    printf("HOURLY_WAGE : %6d\n", HOURLY_WAGE); // 문자열에 포함된 HOURLY_WAGE는 대치되지 않는다.
    printf("your wage   : %6d\n", wage);
}
