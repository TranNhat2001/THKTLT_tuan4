//S(n) = 1 / 2 + 2 / 3 + ⋯ + 𝑛 / 𝑛 + 1
////Đệ quy
#include <stdio.h>

double S3_recursive(int n) {
    if (n == 1) {
        return 1.0 / 2;
    }
    return (double)n / (n + 1) + S3_recursive(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("S3_recursive(%d) = 1/2 + 2/3 + ... + %d/%d+1 = %lf\n", n, n, n, S3_recursive(n));
    return 0;
}
////Khử đệ quy
//#include <stdio.h>
//
//double S3_iterative(int n) {
//    double total = 0;
//    for (int i = 1; i <= n; i++) {
//        total += (double)i / (i + 1);
//    }
//    return total;
//}
//
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("S3_iterative(%d) = = 1/2 + 2/3 + ... + %d/%d+1 = %lf\n", n, n, n, S3_iterative(n));
//    return 0;
//}
