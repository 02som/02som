#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*5. 실수 2개를 입력받아서 합과 차를 구해서 출력하는 프로그램을 작성하시오.*/

int main()
{
	float A;
	float B;
	float add;
	float min;

	printf("실수 2개 입력>> ");
	scanf("%f %f", &A, &B);
	add = A + B;
	min = A - B;
	printf("%.2f + %.2f = %.2f\n", A, B, add);
	printf("%.2f - %.2f = %.2f\n", A, B, min);
	return 0;
}
