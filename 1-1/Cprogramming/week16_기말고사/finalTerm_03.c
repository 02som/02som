#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


void max_elements(const int* A, const int* B, int* C, int n) {
	for (int i = 0; i < n; i++) {
		C[i] = ((A[i] >= B[i]) ? A[i] : B[i]);
	}
}

int main(void) {
	int A[] = { 1,3,5,9,10 };
	int B[] = { 6,7,5,2,4 };
	int n = sizeof(A) / sizeof(A[0]);
	int C[5] = { 0 };
	max_elements(&A, &B, &C, n);
	printf("배열 A원소: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("배열 B원소: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
	printf("배열 A와 B 중 크거나 같은 원소: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", C[i]);
	}
	return 0;
}