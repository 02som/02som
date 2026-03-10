#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>


void quad_eqn(double a, double b, double c) {
    double discriminant, root1, root2;
    discriminant = b * b - 4 * a * c;
    if (a == 0) {
        printf("a가 0이므로 2차 방정식이 아닙니다.\n");
        if (b != 0) {
            printf("이 방정식은 1차 방정식이며, 근은 x = %.2f 입니다.\n", -c / b);
        }
        else if (c == 0) {
            printf("모든 실수가 해입니다.\n");
        }
        else {
            printf("해가 없습니다.\n", c);
        }
        return;
    }

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("이 방정식은 서로 다른 두 실근을 가집ㄴ다:\n");
        printf("x1 = %.2f\n", root1);
        printf("x2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("이 방정식은 중근을 가집니다:\n");
        printf("x = %.2f\n", root1);
    }
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("이 방정식은 서로 다른 두 허근을 가집니다:\n");
        printf("x1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("x2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main(void) {
    double a, b, c;
    printf("2차 방정식 ax^2 + bx + c = 0의 계수를 입력하세요.\n");
    printf("a 계수 입력: ");
    scanf("%lf", &a);
    printf("b 계수 입력: ");
    scanf("%lf", &b);
    printf("c 계수 입력: ");
    scanf("%lf", &c);
    printf("\n방정식: %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);
    quad_eqn(a, b, c);
    return 0;
}