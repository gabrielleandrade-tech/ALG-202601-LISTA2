#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, aux;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b) { aux = a; a = b; b = aux; }
    if (a < c) { aux = a; a = c; c = aux; }
    if (b < c) { aux = b; b = c; c = aux; }

    printf("%d %d %d\n", a, b, c);

    system("pause");
    return 0;
}
