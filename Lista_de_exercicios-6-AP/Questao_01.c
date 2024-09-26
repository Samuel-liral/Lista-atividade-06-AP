#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validar_senha(char senha[]) {
    int tem_numero = 0, tem_maiuscula = 0, tem_minuscula = 0;
    int tamanho = strlen(senha);
    
    if (tamanho < 8 || tamanho > 100) return 0; 

    for (int i = 0; i < tamanho; i++) {
        if (isdigit(senha[i])) tem_numero = 1;
        if (isupper(senha[i])) tem_maiuscula = 1;
        if (islower(senha[i])) tem_minuscula = 1;
    }

    return tem_numero && tem_maiuscula && tem_minuscula;
}

int main() {
    char senha[101];
    printf("Digite a senha: ");
    scanf("%100s", senha);

    if (validar_senha(senha)) {
        printf("Senha válida.\n");
    } else {
        printf("Senha inválida.\n");
    }

    return 0;
}

