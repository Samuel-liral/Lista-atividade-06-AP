#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remover_espacos_pontuacao(char string[]) {
    int j = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (isalnum(string[i])) {
            string[j++] = tolower(string[i]);
        }
    }
    string[j] = '\0';
}

int eh_palindromo(char string[]) {
    int inicio = 0;
    int fim = strlen(string) - 1;

    while (inicio < fim) {
        if (string[inicio] != string[fim]) {
            return 0;
        }
        inicio++;
        fim--;
    }
    return 1;
}

int main() {
    char string[200];
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';
    
    remover_espacos_pontuacao(string);

    if (eh_palindromo(string)) {
        printf("A string é um palindromo.\n");
    } else {
        printf("A string não é um palindromo.\n");
    }

    return 0;
}

