#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    double a = 0, b = 0, c = 0, discr = 0, root1 = 0, root2 = 0, answer = 0;

    printf("이차방정식의 계수 a, b, c를 입력하세요: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            printf("방정식이 성립하지 않습니다.\n");
        }
        else {
            answer = -c / b;
            printf("일차방정식의 근: %lf", answer);
        }
    }
    else {
        discr = (b * b) - (4 * a * c);

        if (discr > 0) {
            root1 = (-b + sqrt(discr)) / (2 * a);
            root2 = (-b - sqrt(discr)) / (2 * a);
            printf("위의 이차 방정식의 실근은 %lf, %lf 입니다.\n", root1, root2);
        }
        else if (discr == 0) {
            root1 = -b / (2 * a);
            printf("위의 이차 방정식의 중근은 %lf 입니다.\n", root1);
        }
        else {
            printf("실근이 존재하지 않습니다.\n");
        }
    }
    printf("계속하려면 아무 키나 누르십시오. . .\n");

    return 0;
}
