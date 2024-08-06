//S(n) = 1.2 + 2.3 + 3.4 + 4.5 + .…. + n.(n + 1)
////Đệ quy
#include <stdio.h>

int S5_recursive(int n) {
    if (n == 1) {
        return 1 * 2;
    }
    return n * (n + 1) + S5_recursive(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("S5_recursive(%d) = 1.2 + 2.3 + 3.4 + 4.5 + ... + %d.(%d + 1) = %d\n", n, n, n, S5_recursive(n));
    return 0;
}

////Khử đệ quy
//#include <stdio.h>
//
//int S5_iterative(int n) {
//    int total = 0;
//    for (int i = 1; i <= n; i++) {
//        total += i * (i + 1);
//    }
//    return total;
//}
//
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("S5_iterative(%d) = 1.2 + 2.3 + 3.4 + 4.5 + ... + n.(n + 1) = %d\n", n, n, n, S5_iterative(n));
//    return 0;
//}