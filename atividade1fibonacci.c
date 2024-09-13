#include <stdio.h>

// Prototipo da função
int Fibonacci(int num);



int main() {
    int num;


    printf("Digite um numero para verificar se ele pertence a sequencia de Fibonacci:\n ");
    scanf("%d", &num);


    //Se a funcao for 1 é verdade se 0 é falso
    if (Fibonacci(num)) {
        printf("O numero %d PERTENCE a sequencia de Fibonacci.\n", num);
    } else {
        printf("O numero %d NAO PERTENCE a sequencia de Fibonacci.\n", num);
    }

    return 0;
}


int Fibonacci(int num) {
    int a = 0, b = 1, prox = 0;


    if (num == 0 || num == 1) {
        return 1;
    }


    while (prox < num) {
        prox = a + b; // Calcula o próximo número da sequência
        a = b;         // Atualiza fib_0 para o número anterior
        b = prox;         // Atualiza fib_1 para o número atual


        if (prox == num) {
            return 1;
        }
    }

    // Se passar do loop e não encontrar o número, ele não pertence à sequência
    return 0;
}
