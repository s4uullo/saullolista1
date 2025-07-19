#include <stdio.h>

int main() {
    int h, tipo;

    printf("Informe a altura do triângulo: ");
    scanf("%d", &h);

    printf("Digite 1 para triângulo preenchido ou 2 para triângulo vazado: ");
    scanf("%d", &tipo);

    for (int i = 0; i < h; i++) {
        for (int s = 0; s < h - i - 1; s++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            if (tipo == 1) {
                printf("* ");
            } else {
                if (j == 0 || j == i || i == h - 1) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}