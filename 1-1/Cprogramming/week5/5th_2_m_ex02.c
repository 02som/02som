//실습2
//월을 입력받는 변수 month를 선언하고,
//계절을 출력하는 프로그램을 작성하시오.(if - else if 사용)

#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>
int main(void)
{
    int month = 0;
    printf("월을 입력하시오:");
    scanf_s("%d", &month);
    if (month >= 1 && month <= 12) {
        if (month >= 3 && month <= 5) {
            printf("Spring");
        }
        else if (month >= 6 && month <= 8) {
            printf("Summer");
        }
        else if (month >= 9 && month <= 11) {
            printf("Autumn");
        }
        else {
            printf("Winter");
        }
    }
    else {
        printf("잘못 입력했습니다.");
    }
    return 0;
}
