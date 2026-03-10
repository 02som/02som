#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double answer = 0;

void calc(double num, char op) {
    switch (op) {
    case '+':
        answer += num;
        break;
    case '-':
        answer -= num;
        break;
    case '*':
        answer *= num;
        break;
    case '/':
        answer /= num;
        break;
    default:
        printf("잘못된 연산자입니다.\n");
    }
}

int main(void) {
    double num;
    char op;

    while (1) {
        printf("연산자와 피연산자 입력 (끝내려면 0 0 입력)>> ");
        scanf(" %c %lf", &op, &num); //%c 앞에 공백 안넣으면 안되는이유: 안그러면 엔터를 읽음->잘못된 연산자 취급받음!!

        if (op == '0' && num == 0) {
            break;
        }
        else{
            printf("%.2lf %c %.2lf", answer, op, num);
            calc(num, op);
            printf(" = %.2lf\n", answer);
        }
    }
    return 0;
}