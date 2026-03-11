#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define SIZE 5
/*2.크기가 같은 2개의 정수형 배열을 매개변수로 전달받아 두 배열의 원소들의 값을 맞바꾸는 함수를 작성하시오.
이 함수를 이용해서 크기가 5인 두배열의 값을 맞바꾸는 프로그램을 작성하시오.배열은 다음과 같이 초기화해서 사용할 것!

a배열 : 1, 3, 5, 7, 9
b배열 : 0, 2, 4, 6, 8
< 실행 후 >
a배열 : 0, 2, 4, 6, 8
b배열 : 1, 3, 5, 7, 9*/

void change(int* a, int* b, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

int main(void) {
    int a[SIZE] = { 1, 3, 5, 7, 9 };
    int b[SIZE] = { 0, 2, 4, 6, 8 };

    printf("a배열: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");
    printf("b배열: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(b + i));
    }
    change(a, b, SIZE);
    printf("\n<  실행 후  >\n");
    printf("a배열: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");
    printf("b배열: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(b + i));
    }
    return 0;
}
