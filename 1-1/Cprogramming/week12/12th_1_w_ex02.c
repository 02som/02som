#define  _CRT_SECURE_NO_WARNINGS        // scanf 사용을 위해 필요
#include <stdio.h>
//주어진프로그램을참고하여, 열가지물질의어는점{15, 0, -20, -30, 50, -5, -120, -5, 10, -12}를 freeze배열에 저장한
// 후, 가장 높은 어는점(최대값)을구하여다음과같이출력하시오

void print_array(int arr[], int size)   // 배열의 원소를 출력하는 함수
{
    int  i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void)
{
    int freeze[] = { 15,0,-20,-30,50,-5,-120,-5,10,-12 };    // 배열의 크기 생략
    int size, i;
    int max_arr;
    int max = freeze[0];  // 첫 번째 요소로 초기화

    size = sizeof(freeze) / sizeof(freeze[0]);  // 배열의 크기
    printf("어는 점 목록: ");
    print_array(freeze, size);        // 배열을 출력한다.

    for (i = 0; i < size; i++)
        if (freeze[i] >= max) {
            max = freeze[i];
            max_arr = i;
        }
    printf("\n가장 높은 어는 점: ");
    printf("freeze[%d]=%d\n", max_arr, max);
    return 0;
}