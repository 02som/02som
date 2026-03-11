#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

double calc_elec_bill(int usage) {
	if (usage <= 1000) {
		return usage * 50;
	}
	else {
		return (usage - 1000) * 75 + 1000 * 50;
	}
}
int main(void) {
	int usage;
	double bill;
	printf("연간 전기 사용량을 입력하시오(단위: kWh): ");
	scanf("%d", &usage);
	bill = calc_elec_bill(usage);
	printf("전기 요금: %.2lf 원", bill);
	return 0;
}