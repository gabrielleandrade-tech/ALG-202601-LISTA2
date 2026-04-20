#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b, mmc;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0) {
        printf("MMC indefinido\n");
    } else {
        mmc = (a * b) / mdc(a, b);
        printf("MMC = %d\n", mmc);
    }

    system("pause");
    return 0;
}
