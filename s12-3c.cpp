#include <stdio.h>

int tinhgiaithua(int n) {
    int gt = 1;
    for (int i = 1; i <= n; i++) {
        gt *= i;
    }
    return gt;
}

int main() {
    int n;
    printf("Nhập một số nguyên: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Không có giai thừa cho số âm!\n");
    } else {
        printf("Giai thừa của %d là: %d\n", n, tinhgiaithua(n));
    }
    return 0;
}
