#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define MAX 10
//크기가10인정수형배열을선언하고, 등차수열로값을채우
//려고한다.첫번째 항의값과공차를입력받아서배열원소값
//을채우고출력하는프로그램을작성하시오

int main(void)
{
    int x[MAX] = { 0 };
    int i = 0;
    int d = 0;
    printf("첫번째 항의 값을 입력하시오>> ");
    scanf("%d", &x[0]);
    printf("공차를 입력하시오>> ");
    scanf("%d", &d);
    for (i = 1; i < MAX; i++)
        x[i] = x[0] + i*d;
    for (i = 0; i < MAX; i++)
        printf("x[%d]=%d\n", i, x[i]);

    printf("계속하려면 아무 키나 누르십시오...\n");

    return 0;
}