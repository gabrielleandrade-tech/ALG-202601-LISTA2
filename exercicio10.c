#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    unsigned long long fat = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fat *= i;
    }

    printf("Fatorial = %llu\n", fat);

    system("pause");
    return 0;
}
