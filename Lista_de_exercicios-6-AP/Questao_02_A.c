#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    printf("Digite uma string: ");
    scanf("%99s", string);

    printf("O tamanho da string e: %lu\n", strlen(string));
    return 0;
}

