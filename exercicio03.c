#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    letra = tolower(letra);

    if (letra >= 'a' && letra <= 'z') {
        if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
            printf("Vogal\n");
        else
            printf("Consoante\n");
    } else {
        printf("Entrada invalida\n");
    }

    system("pause");
    return 0;
}
