#include <stdio.h>

int UCLN_recursive(int a, int b) {
    if (a == b) {
        return a;
    }
    if (a > b) {
        return UCLN_recursive(a - b, b);
    }
    return UCLN_recursive(a, b - a);
}

int main() {
    int a, b;
    printf("Nhap a: ");
    scanf_s("%d", &a);
    printf("Nhap b: ");
    scanf_s("%d", &b);
    printf("UCLN_recursive(%d, %d) = %d\n", a, b, UCLN_recursive(a, b));
    return 0;
}
