#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para a função tolower

#define MAX_LENGTH 1000 // Define o tamanho máximo da string

// Função para contar o número de ocorrências da letra 'a' (tanto maiúscula quanto minúscula)
int contarA(const char *str) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (tolower(str[i]) == 'a') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[MAX_LENGTH];

    // Solicita ao usuário para inserir uma string
    printf("Digite uma string: ");
    fgets(str, MAX_LENGTH, stdin);

    // Remove o caractere de nova linha se presente
    str[strcspn(str, "\n")] = '\0';

    int count = contarA(str);

    if (count > 0) {
        printf("A letra 'a' foi encontrada %d vez(es).\n", count);
    } else {
        printf("A letra 'a' não foi encontrada na string.\n");
    }

    return 0;
}
