/*1.날짜를 연 월 일로 입력받아서 출력하는 프로그램을 작성하시오.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int year;
    int month;
    int day;

    printf("연 >> ");
    scanf("%d", &year);
    printf("월 >> ");
    scanf("%d", &month);
    printf("일 >> ");
    scanf("%d", &day);

    printf("%d년 %d월 %d일 입니다.", year, month, day);
    return 0;
}
