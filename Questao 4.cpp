#include <stdio.h>
int main(){
    int h = 0;
    char x;

    printf("Informe a altura do quadrado: ");
    scanf("%d", &h);

    printf("Como gostaria de como o retângulo aparecesse: ");
    printf("\n1. Preenchido\n2. Vazado\n");
    scanf(" %c", &x);

    switch (x){
    case '1':
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < h; j++) {
                printf("*");
            }
            printf("\n");
        }
        break;
    
    case '2':
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < h; j++) {
                if (i == 0 || i == h - 1 || j == 0 || j == h - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;
    default:
        break;
    }
    
    return 0;
}