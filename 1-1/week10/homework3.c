#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int power(int x, int y) {
    int result = 1;
    int i;
    for (i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main(void) {
    int x, y, result;
    printf("밑수(x)를 입력하세요: ");
    scanf("%d", &x);
    printf("지수(y)를 입력하세요: ");
    scanf("%d", &y);
    result = power(x, y);
    printf("%d의 %d승은 %d입니다.\n", x, y, result);
    return 0;
}

