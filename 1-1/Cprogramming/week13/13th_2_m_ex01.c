#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
//배열 원소를 가리키는 포인터를 이용해서 정수형 배열의 원소에 입력받은 정수를 더한 다음출려하는 프로그램 작성
/*
int main(void)
{
    int arr[10] = { 12, 54, 23, 43, 87, 31, 67, 92, 75, 2 };
    int* p = arr;
    int num;

    printf("정수 입력>> ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        *(p + i) += num;
        printf("%d ", *(p + i));
    }

    return 0;
}*/