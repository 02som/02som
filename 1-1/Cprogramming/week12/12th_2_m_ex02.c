#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define ARR_SIZE 5

//예제 6번
/*
int main(void) {
    int num[ARR_SIZE][ARR_SIZE] = { 0 };
    int drag[ARR_SIZE] = { 0 };
    int i, j, h=0;

    for (i = 0; i < ARR_SIZE; i++) {
        for (j =0; j < ARR_SIZE; j++) {
            num[i][j] = ++h;
            h = i * ARR_SIZE + j + 1;
            printf("%2d ", h);

            if (i == j) { 
                drag[i] = num[i][j];
            }
        }
        printf("\n");
    }
    printf("대각원소:");
    for (i = 0; i < ARR_SIZE; i++)
        printf("%d ", drag[i]);
    return 0;
}
*/