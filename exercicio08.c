#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, imc;

    printf("Digite peso e altura: ");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    system("pause");
    return 0;
}
