//S(n) = 1.2!/ (2 + √3) + 2.3!(3 + √4) + 3.4!/ (4 + √5) + ⋯ + n.(n + 1)!/ ((n + 1) + √(n + 2))
////Đệ quy
#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

double S6_recursive(int n) {
    if (n == 1) {
        return (1.0 * factorial(2)) / (2 + sqrt(3));
    }
    return (n * factorial(n + 1)) / ((n + 1) + sqrt(n + 2)) + S6_recursive(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("S6_recursive(%d) = 1.2!/ (2 + √3) + 2.3!(3 + √4) + 3.4!/ (4 + √5) + ... + %d.(%d + 1)!/ ((%d + 1) + √(%d + 2)) = %lf\n", n, n, n, n, n, S6_recursive(n));
    return 0;
}

////Khử đệ quy
//#include <stdio.h>
//#include <math.h>
//
//int factorial(int n) {
//    int result = 1;
//    for (int i = 1; i <= n; i++) {
//        result *= i;
//    }
//    return result;
//}
//
//double S6_iterative(int n) {
//    double total = 0;
//    for (int i = 1; i <= n; i++) {
//        total += (i * factorial(i + 1)) / ((i + 1) + sqrt(i + 2));
//    }
//    return total;
//}
//
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("S6_iterative(%d) = 1.2!/ (2 + √3) + 2.3!(3 + √4) + 3.4!/ (4 + √5) + ... + %d.(%d + 1)!/ ((%d + 1) + √(%d + 2)) = %lf\n", n, n, n, n, n, S6_iterative(n));
//    return 0;
//}