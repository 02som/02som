#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>

int get_integer() {
    int num;
    scanf("%d", &num);
    return num;
}

double get_hypotenuse(int width, int height) {
    return sqrt(width * width + height * height);
}

double get_perimeter(int width, int height) {
    double hypotenuse = get_hypotenuse(width, height);
    return width + height + hypotenuse;
}

double get_area(int width, int height) {
    return 0.5 * width * height;
}

int main(void) {
    int width, height;
    double hypotenuse, perimeter, area;
    printf("직각삼각형의 밑변을 입력하세요: ");
    width = get_integer();
    printf("직각삼각형의 높이를 입력하세요: ");
    height = get_integer();
    hypotenuse = get_hypotenuse(width, height);
    perimeter = get_perimeter(width, height);
    area = get_area(width, height);
    printf("빗변의 길이는: %.2f\n", hypotenuse);
    printf("삼각형의 둘레는: %.2f\n", perimeter);
    printf("삼각형의 넓이는 : %.2f\n", area);
    return 0;
}

