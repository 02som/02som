#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define PI 3.141592

int get_integer() {
    int num;
    scanf("%d", &num);
    return num;
}

double get_cir(double r) {
    return 2 * PI * r;
}

double get_area(double r) {
    return PI * r * r;
}

int main(void) {
    int r;
    double circumference, area;
    printf("원의 반지름을 입력하세요: ");
    r = get_integer();
    circumference = get_cir(r);
    area = get_area(r);
    printf("반지름이 %d인 원의 둘레는 %.2f입니다.\n", r, circumference);
    printf("반지름이 %d인 원의 넓이는 %.2f입니다.\n", r, area);
    return 0;
}

