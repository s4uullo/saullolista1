#include <stdio.h>

int main() {
    int B, L, A;

    
    do {
        printf("Informe o número de asteriscos na base da árvore (ímpar, >= 3): ");
        scanf("%d", &B);
        if (B < 3 || B % 2 == 0) {
            printf("Valor inválido para a base!\n");
        }
    } while (B < 3 || B % 2 == 0);

    
    do {
        printf("Informe a largura do tronco (ímpar, >=1 e <= metade da base): ");
        scanf("%d", &L);
        if (L < 1 || L % 2 == 0 || L > B / 2) {
            printf("Valor inválido para a largura do tronco!\n");
        }
    } while (L < 1 || L % 2 == 0 || L > B / 2);

    
    do {
        printf("Informe a altura do tronco (>=2 e <= metade da base): ");
        scanf("%d", &A);
        if (A < 2 || A > B / 2) {
            printf("Valor inválido para a altura do tronco!\n");
        }
    } while (A < 2 || A > B / 2);

    int h = (B + 1) / 2; 

   
    for (int i = 1; i <= B; i += 2) {
        int espacos = (B - i) / 2;
        for (int s = 0; s < espacos; s++) printf(" ");
        for (int a = 0; a < i; a++) printf("*");
        printf("\n");
    }

    
    int espacos_tronco = (B - L) / 2;
    for (int i = 0; i < A; i++) {
        for (int s = 0; s < espacos_tronco; s++) printf(" ");
        for (int a = 0; a < L; a++) printf("*");
        printf("\n");
    }

    return 0;
}