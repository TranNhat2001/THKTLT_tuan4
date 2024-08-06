////S(n) = 1 + 2 + 3 + … + n.
////Đệ quy
#include <stdio.h>

int S1_recursive(int n) {
    if (n == 1) {
        return 1;
    }
    return n + S1_recursive(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("S1_recursive(%d) = 1 + 2 + ... + %d = %d\n", n, n, S1_recursive(n));
    return 0;
}
////Khử đệ quy
//#include <stdio.h>
//
//int S1_iterative(int n) {
//    int total = 0;
//    for (int i = 1; i <= n; i++) {
//        total += i;
//    }
//    return total;
//}
//
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("S1_iterative(%d) = 1 + 2 + ... + %d = %d\n",n , n, S1_iterative(n));
//    return 0;
//}