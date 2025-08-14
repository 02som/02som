/*달러를 입력받아서 몇 원인지 출력하는 프로그램 작성. */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float dollar;
    int won;

    printf("달러? ");
    scanf("%f", &dollar);
    won = dollar * 1000;
    printf("$%.2f는 %d원입니다.\n", dollar, won);
    return 0;
}
