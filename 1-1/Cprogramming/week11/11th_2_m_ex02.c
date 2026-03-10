#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
//크기가10인정수형배열을선언하고, 2번배열원소까지만
//값을할당하고, 나머지는0으로초기화한다.배열원소값이0
//인경우에만값을할당받는프로그램을작성하시오.
/*
#define MAX 10
int main(void)
{
    int x[MAX] = { 1, 2, 3 };
    int i = 0;

    for (i = 0; i < MAX; i++)
        while (x[i] == 0) {
            printf("%d번째 배열원소값을 입력하시오>> ", i+1);
            scanf("%d", &x[i]);
        }

    printf("\n==배열 원소 출력==\n");

    for (i = 0; i < 10; i++)
        printf("x[%d]=%d\n", i, x[i]);

    printf("계속하려면 아무 키나 누르십시오...\n");

    return 0;
}*/