/*3. 옷사이즈를 선택하게 하고 선택된 사이즈를 출력하는 프로그램을 작성하시오.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char size = 'M';

    printf("옷 사이즈(S, M, L)? ? ");
    scanf_s("%c", &size);
    printf("%c 사이즈를 선택했습니다.\n", size);
    return 0;

}
