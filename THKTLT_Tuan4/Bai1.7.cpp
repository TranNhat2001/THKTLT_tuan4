//S(n) = (1 + √1 + 2) / (2 + √3!) + (2 + √2 + 3) / (3 + √4!) + (3 + √3 + 4) / 4 + √5!+ ⋯ + (n + √n + n + 1) / (n + 1) + √(n + 2)!
////Đệ quy
#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

double S7_recursive(int n) {
    if (n == 1) {
        return (1 + sqrt(1 + 2)) / (2 + sqrt(factorial(3)));
    }
    return (n + sqrt(n + n + 1)) / ((n + 1) + sqrt(factorial(n + 2))) + S7_recursive(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("S7_recursive(%d) = %lf\n", n, S7_recursive(n));
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
//double S7_iterative(int n) {
//    double total = 0;
//    for (int i = 1; i <= n; i++) {
//        total += (i + sqrt(i + i + 1)) / ((i + 1) + sqrt(factorial(i + 2)));
//    }
//    return total;
//}
//
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf("%d", &n);
//    printf("S7_iterative(%d) = %lf\n", n, S7_iterative(n));
//    return 0;
//}
