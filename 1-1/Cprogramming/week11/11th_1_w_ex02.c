#include <stdio.h>
//크기가 10인 배열 선언,0으로  초기화, 반복문으로 배열원소값 0부터 9까지 할당, 출력
int main(void)
{
    int arr[10] = { 0 };

    for (int i = 0; i <10; i++)
        printf("arr[%d] = %d\n", i, arr[i]=i);

    return 0;
}