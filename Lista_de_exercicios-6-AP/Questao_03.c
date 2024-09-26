#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    printf("Digite uma string: ");
    scanf("%99s", string);

    int tamanho = strlen(string);
    printf("String de tras para frente: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}

