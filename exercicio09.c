#include <stdio.h>
#include <stdlib.h>

int main() {
    float tamanho, velocidade, tempo;

    printf("Digite tamanho (MB): ");
    scanf("%f", &tamanho);

    printf("Digite velocidade (Mbps): ");
    scanf("%f", &velocidade);

    tempo = (tamanho * 8) / velocidade;
    tempo = tempo / 60;

    printf("Tempo = %.2f minutos\n", tempo);

    system("pause");
    return 0;
}
