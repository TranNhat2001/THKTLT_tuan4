////S(n) = √5 + √5 +⋯+√5+√5 có n dấu căn.
////Đệ quy
#include <stdio.h>
#include <math.h>

double S2_recursive(int n) {
    if (n == 0) {
        return 0;
    }
    return sqrt(5) + S2_recursive(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("S2_recursive(%d) = %lf\n", n, S2_recursive(n));
    return 0;
}

////Khử đệ quy
//#include <stdio.h>
//#include <math.h>
//
//double S2_iterative(int n) {
//    return n * sqrt(5);
//}
//
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("S2_iterative(%d) = %lf\n", n, S2_iterative(n));
//    return 0;
//}