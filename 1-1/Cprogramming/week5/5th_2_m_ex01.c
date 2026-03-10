//실습1
/*두 개의 정수(a, b)를 입력 받아 a-b의 값이 0보다 크면 "변수 a가 큽니다."를,
a-b의 값이 0보다 작으면 "변수 b가 큽니다."를, 그렇지 않으면
"같은 값을 입력했습니다."를 출력하는 프로그램을 작성하시오. 

알고리즘
1. 변수ab선언*/
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>
int main(void)
{
    int a=0, b=0;
    printf("두 정수 a,b값을 입력하시오:");
    scanf_s("%d %d", &a, &b);
    if (a-b>0) {
        printf("변수 a가 큽니다.\n");
    }
    else if (a-b<0) {
        printf("변수 b가 큽니다.\n");
    }
    else {
        printf("같은 값을 입력했습니다.");
    }
    return 0;
    
}
