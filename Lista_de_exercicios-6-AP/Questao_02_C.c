#include <stdio.h>
#include <string.h>

int calcular_tamanho(char string[]) {
    int tamanho = 0;
    while (string[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}

int main() {
    char string[100];
    printf("Digite uma string: ");
    scanf("%99s", string);

    int tamanho_strlen = strlen(string);
    int tamanho_manual = calcular_tamanho(string);

    printf("Tamanho usando strlen: %d\n", tamanho_strlen);
    printf("Tamanho calculado manualmente: %d\n", tamanho_manual);

    if (tamanho_strlen == tamanho_manual) {
        printf("Os tamanhos sao iguais.\n");
    } else {
        printf("Os tamanhos sao diferentes.\n");
    }

    return 0;
}

