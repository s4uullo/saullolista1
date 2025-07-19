#include <stdio.h>

int main() {
    int largura;

    printf("Informe a largura central do losango (ímpar): ");
    scanf("%d", &largura);

    if (largura < 1 || largura % 2 == 0) {
        printf("A largura deve ser um número ímpar maior que 0.\n");
        return 1;
    }

    int meio = largura / 2;

    
    for (int i = 0; i <= meio; i++) {
        for (int j = 0; j < meio - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (int i = meio - 1; i >= 0; i--) {
        for (int j = 0; j < meio - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}