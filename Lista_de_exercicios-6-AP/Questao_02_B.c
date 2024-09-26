#include <stdio.h>

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

    printf("O tamanho da string e: %d\n", calcular_tamanho(string));
    return 0;
}

