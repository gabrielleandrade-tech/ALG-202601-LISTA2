#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, palpite, tentativas = 0;

    srand(time(NULL));
    numero = rand() % 101;

    do {
        printf("Digite um numero (0 a 100): ");
        scanf("%d", &palpite);

        if (palpite < numero)
            printf("Maior!\n");
        else if (palpite > numero)
            printf("Menor!\n");

        tentativas++;

    } while (palpite != numero);

    printf("Acertou em %d tentativas\n", tentativas);

    system("pause");
    return 0;
}
