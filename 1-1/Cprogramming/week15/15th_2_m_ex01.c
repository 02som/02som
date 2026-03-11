#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct product {
    char name[20]; 
    int price; 
    int stock; 
};

void print_product(struct product* p) {
    printf("\n[%s %d원 재고 : %d]\n", p->name, p->price, p->stock);
}

int main(void) {
    struct product p;

    printf("제품명?: ");
    scanf("%s", p.name); 

    printf("가격?: ");
    scanf("%d", &p.price);

    printf("재고?: ");
    scanf("%d", &p.stock);

    print_product(&p);

    return 0;
}
