#include <stdio.h>

 int main(void)
 {
 	float num=100.2345;
 	int i_part;
 	float f_part;

	i_part = num;
 	f_part = num - i_part;

 	printf("%f의 정수부는 %d이고, 실수부는 %f입니다.\n", num, i_part, f_part);

	return 0;
 }
