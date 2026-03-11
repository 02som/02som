#include <stdio.h>

//크기가 3인 더블형 배열의 원소의 주소를 추력하는 프로그램을 작성하시오. 주소구하기연산자x 포인터로 출력
int main(void)
{
    int i;
    double arr[3] = { 1,2,3 };
    double* p = arr;
    for (i = 0; i < 3; i++) {
        printf("arr원소 %d번 주소: %p\n",i+1, p+i);
    }

    return 0;
}
