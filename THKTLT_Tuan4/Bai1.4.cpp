//S(n) = 1 + 1 / 3 + 1 / 5 + ... + 1 / (2n + 1)
////Đệ quy
#include <stdio.h>

double S4_recursive(int n) {
    if (n == 1) {
        return 1.0 + 1.0 / 3;
    }
    return 1.0 / (2 * n + 1) + S4_recursive(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("S4_recursive(%d) = 1 + 1 / 3 + 1 / 5 + ... + 1 / (2*%d + 1) = %lf\n", n, n, S4_recursive(n));
    return 0;
}
////Khử đệ quy
//#include <stdio.h>
//
//double S4_iterative(int n) {
//    double total = 0;
//    for (int i = 1; i <= n; i++) {
//        total += 1.0 / (2 * i + 1);
//    }
//    return total;
//}
//
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("S4_iterative(%d) = 1 + 1 / 3 + 1 / 5 + ... + 1 / (2*%d + 1) = %lf\n", n, n, S4_iterative(n));
//    return 0;
//}